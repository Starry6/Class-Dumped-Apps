@interface CSJTipsHUD : NSObject
@property (nonatomic) UILabel hudLabel;
- (void)backupAction;
- (id)hudLabel;
- (void)setHudLabel:;
- (void)showHUDWithTips:;
- (void)hideHUD;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
@end
