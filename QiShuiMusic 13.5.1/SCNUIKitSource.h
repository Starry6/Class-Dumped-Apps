@interface SCNUIKitSource : SCNImageSource
@property (nonatomic) UIView uiView;
@property (nonatomic) UIWindow uiWindow;
- (id)init;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;
- (BOOL)supportsMetal;
- (id)prepareWindowIfNeeded;
- (id)uiView;
- (void)setUiView:;
- (id)uiWindow;
- (void)setUiWindow:;
@end
