@interface WebDefaultEditingDelegate : NSObject
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)webViewDidChange:;
- (BOOL)webView:shouldBeginEditingInDOMRange:;
- (BOOL)webView:shouldEndEditingInDOMRange:;
- (BOOL)webView:shouldInsertNode:replacingDOMRange:givenAction:;
- (BOOL)webView:shouldInsertText:replacingDOMRange:givenAction:;
- (BOOL)webView:shouldDeleteDOMRange:;
- (BOOL)webView:shouldChangeSelectedDOMRange:toDOMRange:affinity:stillSelecting:;
- (BOOL)webView:shouldApplyStyle:toElementsInDOMRange:;
- (BOOL)webView:shouldChangeTypingStyle:toStyle:;
- (BOOL)webView:doCommandBySelector:;
- (void)webViewDidBeginEditing:;
- (void)webViewDidEndEditing:;
- (void)webViewDidChangeTypingStyle:;
- (void)webViewDidChangeSelection:;
- (id)undoManagerForWebView:;
- (id)documentFragmentForPasteboardItemAtIndex:;
- (BOOL)webView:shouldMoveRangeAfterDelete:replacingRange:;
+ (id)sharedEditingDelegate;
@end
