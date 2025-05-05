@interface IESLiveAutoHideLockButton : UIView
@property (nonatomic) BOOL isLock;
@property (nonatomic) UIView<IESLiveWebPPlayer> lockView;
@property (nonatomic) UIView<IESLiveWebPPlayer> unlockView;
- (BOOL)isLock;
- (void)setButtonAccessibility;
- (void)setIsLock:;
- (void)setUnlockView:;
- (id)unlockView;
- (id)init;
- (void)setState:;
- (void)hide;
- (void)show;
- (void)refreshUI;
- (void)setup;
- (void).cxx_destruct;
- (id)lockView;
- (void)setLockView:;
+ (BOOL)liveFixAutohideImage;
@end
