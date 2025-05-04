@interface AWELongPressPanelRelatedRecommendViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) AWEVideoRelatedPanelManager videoRelatedPanelManager;
- (BOOL)needShow;
- (void)configVM;
- (id)videoRelatedPanelManager;
- (void)tryPreloadRelatedVideoForRelatedpanelWithPreloadType:;
- (void)setVideoRelatedPanelManager:;
- (void).cxx_destruct;
+ (id)longPressPanelViewModel;
@end
