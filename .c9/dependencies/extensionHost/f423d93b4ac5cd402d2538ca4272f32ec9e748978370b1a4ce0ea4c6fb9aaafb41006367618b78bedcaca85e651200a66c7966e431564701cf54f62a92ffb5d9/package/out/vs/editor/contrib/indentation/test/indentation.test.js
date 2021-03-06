/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
define(["require", "exports", "vs/editor/common/core/selection", "vs/editor/contrib/indentation/indentation", "vs/editor/test/browser/testCommand"], function (require, exports, selection_1, indentation_1, testCommand_1) {
    "use strict";
    Object.defineProperty(exports, "__esModule", { value: true });
    function testIndentationToSpacesCommand(lines, selection, tabSize, expectedLines, expectedSelection) {
        testCommand_1.testCommand(lines, null, selection, (sel) => new indentation_1.IndentationToSpacesCommand(sel, tabSize), expectedLines, expectedSelection);
    }
    function testIndentationToTabsCommand(lines, selection, tabSize, expectedLines, expectedSelection) {
        testCommand_1.testCommand(lines, null, selection, (sel) => new indentation_1.IndentationToTabsCommand(sel, tabSize), expectedLines, expectedSelection);
    }
    suite('Editor Contrib - Indentation to Spaces', () => {
        test('single tabs only at start of line', function () {
            testIndentationToSpacesCommand([
                'first',
                'second line',
                'third line',
                '\tfourth line',
                '\tfifth'
            ], new selection_1.Selection(2, 3, 2, 3), 4, [
                'first',
                'second line',
                'third line',
                '    fourth line',
                '    fifth'
            ], new selection_1.Selection(2, 3, 2, 3));
        });
        test('multiple tabs at start of line', function () {
            testIndentationToSpacesCommand([
                '\t\tfirst',
                '\tsecond line',
                '\t\t\t third line',
                'fourth line',
                'fifth'
            ], new selection_1.Selection(1, 5, 1, 5), 3, [
                '      first',
                '   second line',
                '          third line',
                'fourth line',
                'fifth'
            ], new selection_1.Selection(1, 9, 1, 9));
        });
        test('multiple tabs', function () {
            testIndentationToSpacesCommand([
                '\t\tfirst\t',
                '\tsecond  \t line \t',
                '\t\t\t third line',
                ' \tfourth line',
                'fifth'
            ], new selection_1.Selection(1, 5, 1, 5), 2, [
                '    first\t',
                '  second  \t line \t',
                '       third line',
                '   fourth line',
                'fifth'
            ], new selection_1.Selection(1, 7, 1, 7));
        });
        test('empty lines', function () {
            testIndentationToSpacesCommand([
                '\t\t\t',
                '\t',
                '\t\t'
            ], new selection_1.Selection(1, 4, 1, 4), 2, [
                '      ',
                '  ',
                '    '
            ], new selection_1.Selection(1, 4, 1, 4));
        });
    });
    suite('Editor Contrib - Indentation to Tabs', () => {
        test('spaces only at start of line', function () {
            testIndentationToTabsCommand([
                '    first',
                'second line',
                '    third line',
                'fourth line',
                'fifth'
            ], new selection_1.Selection(2, 3, 2, 3), 4, [
                '\tfirst',
                'second line',
                '\tthird line',
                'fourth line',
                'fifth'
            ], new selection_1.Selection(2, 3, 2, 3));
        });
        test('multiple spaces at start of line', function () {
            testIndentationToTabsCommand([
                'first',
                '   second line',
                '          third line',
                'fourth line',
                '     fifth'
            ], new selection_1.Selection(1, 5, 1, 5), 3, [
                'first',
                '\tsecond line',
                '\t\t\t third line',
                'fourth line',
                '\t  fifth'
            ], new selection_1.Selection(1, 5, 1, 5));
        });
        test('multiple spaces', function () {
            testIndentationToTabsCommand([
                '      first   ',
                '  second     line \t',
                '       third line',
                '   fourth line',
                'fifth'
            ], new selection_1.Selection(1, 8, 1, 8), 2, [
                '\t\t\tfirst   ',
                '\tsecond     line \t',
                '\t\t\t third line',
                '\t fourth line',
                'fifth'
            ], new selection_1.Selection(1, 5, 1, 5));
        });
        test('issue #45996', function () {
            testIndentationToSpacesCommand([
                '\tabc',
            ], new selection_1.Selection(1, 3, 1, 3), 4, [
                '    abc',
            ], new selection_1.Selection(1, 6, 1, 6));
        });
    });
});
//# sourceMappingURL=indentation.test.js.map