@interface IESLiveRevenueInteractPlayComponentStreamBottomTips : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveGradientView gradientView;
@property (nonatomic) UILabel contentLabel;
- (void)cleanAndShow;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentLayoutModelChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)openPropDescPage;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)refreshLayout;
- (void)clean;
+ (void)recordShowTimes;
+ (BOOL)canShowOnce;
+ (long long)giftMinValue;
+ (BOOL)shouldLoadComponentForInteractProvider:;
+ (BOOL)shouldShowBarStyleForInteractProvider:;
+ (BOOL)shouldShowToastStyleForInteractProvider:;
@end
