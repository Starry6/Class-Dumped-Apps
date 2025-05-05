@interface WebNodeHighlighter : NSObject
- (void)dealloc;
- (void)highlight;
- (id)initWithInspectedWebView:;
- (void)didAttachWebNodeHighlight:;
- (void)willDetachWebNodeHighlight:;
- (void)hideHighlight;
@end
