@interface AWESearchCachalotGeneralComponent : AWESearchCachalotComponent
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) AWESearchCachalotGeneralCardContainerView containerView;
@property (nonatomic) AWESearchCachalotFeedControllerContext cellContext;
@property (nonatomic) q currentIndex;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentShowingRatioWillExceed:;
- (void)componentShowingRatioWillUnder:;
- (void)componentPrepareForReuse;
- (id)cellController;
- (id)initWithView:viewModel:;
- (void)clearUnreusedSingleRecommendWordsCard;
- (void)handleDoubleColumnReignActive;
- (void)setCurrentIndex:;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)componentView;
- (void)updateWithViewModel:;
- (void)setCellContext:;
- (id)cellContext;
@end
