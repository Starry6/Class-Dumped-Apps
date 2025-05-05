@interface STLive.LiveToastFactoryImp : NSObject
- (void)showHUD:inView:;
- (void)showHUD:;
- (void)showHUD:duration:;
- (void)showTopToast:;
- (void)hideHUD;
- (id)init;
@end
