@interface LynxUIFilterImage : LynxUI
@property (nonatomic) q resizeMode;
@property (nonatomic) NSString src;
@property (nonatomic) UIImage originalImage;
- (void)propsDidUpdate;
- (void)requestImage;
- (void)setBlurRadius:requestReset:;
- (void)setDropShadow:requestReset:;
- (void)setMode:requestReset:;
- (void)setSrc:requestReset:;
- (void)upateFrameWithoutLayerMask;
- (BOOL)updateLayerMaskOnFrameChanged;
- (id)init;
- (void)setOriginalImage:;
- (void).cxx_destruct;
- (id)originalImage;
- (void)setResizeMode:;
- (long long)resizeMode;
- (id)src;
- (void)setSrc:;
- (id)createView;
- (void)frameDidChange;
+ (id)__lynx_prop_config__1821;
+ (id)__lynx_prop_config__1932;
+ (id)__lynx_prop_config__2023;
+ (id)__lynx_prop_config__2194;
+ (void)lynxLazyLoad;
@end
