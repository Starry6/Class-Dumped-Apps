@interface AWEMusicGuideToastContainerView : UIView
@property (nonatomic) AWEMusicGuideToastView toastView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} targetViewFrame;
@property (nonatomic) <AWEMusicGuideToastContainerViewDelegate> delegate;
- (id)targetViewFrame;
- (void)setTargetViewFrame:;
- (id)initWithToastView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)setToastView:;
- (id)toastView;
@end
