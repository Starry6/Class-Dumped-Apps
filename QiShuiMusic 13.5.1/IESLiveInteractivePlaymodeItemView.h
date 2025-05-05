@interface IESLiveInteractivePlaymodeItemView : IESLiveInteractEntranceBaseView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel bottomTitleLbl;
@property (nonatomic) UIImageView loopImageView;
- (id)bottomTitleLbl;
- (void)endLoopSpinAnimation;
- (id)initWithFrame:DIContext:;
- (id)loopImageView;
- (void)setBottomTitleLbl:;
- (void)setLoopImageView:;
- (void)startLoopSpinAnimation;
- (void)applicationDidBecomeActive:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:;
@end
