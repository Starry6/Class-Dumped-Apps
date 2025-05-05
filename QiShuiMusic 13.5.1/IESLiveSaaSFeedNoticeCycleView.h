@interface IESLiveSaaSFeedNoticeCycleView : UIView
@property (nonatomic) NSArray views;
@property (nonatomic) @? presenter;
@property (nonatomic) UIView currentView;
- (id)beforePlayFrame;
- (id)dismissFrame;
- (id)initWithFrame:firstView:secondView:;
- (id)nextViewWithCurrent:;
- (id)playFrame;
- (void)presentView:index:frame:presenter:;
- (void)updateWithPresenter:;
- (void)setPresenter:;
- (id)views;
- (id)presenter;
- (void)startAnimation;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)stopAnimation;
- (void)setViews:;
- (id)currentView;
- (void)setCurrentView:;
@end
