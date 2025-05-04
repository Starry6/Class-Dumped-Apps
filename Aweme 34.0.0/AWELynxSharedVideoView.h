@interface AWELynxSharedVideoView : LynxUI
@property (nonatomic) <AWEAwemeBizPlayVideoProtocol> playerController;
- (void)play:withResult:;
- (void)pause:withResult:;
- (void)stop:withResult:;
- (void)setScalingMode:requestReset:;
- (void)seek:withResult:;
- (void)setPlayerController:;
- (id)playerController;
- (void).cxx_destruct;
- (id)createView;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__371;
+ (id)__lynx_ui_method_config__432;
+ (id)__lynx_ui_method_config__483;
+ (id)__lynx_ui_method_config__534;
+ (id)__lynx_ui_method_config__585;
@end
