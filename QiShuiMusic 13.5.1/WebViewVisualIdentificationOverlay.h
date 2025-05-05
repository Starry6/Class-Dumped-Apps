@interface WebViewVisualIdentificationOverlay : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)drawLayer:inContext:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWebView:kind:deprecated:;
+ (BOOL)shouldIdentifyWebViews;
+ (void)installForWebViewIfNeeded:kind:deprecated:;
@end
