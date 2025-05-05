@interface WebHighlightLayer : CALayer
- (id)actionForKey:;
- (void)layoutSublayers;
- (id)initWithHighlightView:webView:;
@end
