@interface AWEFeedCollectionContainerViewModel : AWEBaseListViewModel
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) AWEVideoDescriptionMaskRelatedRecommendSectionViewModel relatedRecommendViewModel;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)setDataController:;
- (id)createViewModelsWithAwemeModels:;
- (void)updateSectionViewModelsWithoutRelatedRecommend:;
- (void)updateWithContext:andDataController:;
- (void)recreateSectionViewModel;
- (long long)relatedRecommendSection;
- (long long)cellModelCount;
- (void)handleResponse:isloadingMore:error:;
- (id)relatedRecommendViewModel;
- (void)preloadFirstCoverInSingleMode;
- (void)setRelatedRecommendViewModel:;
- (void)dealloc;
- (void)clearData;
- (void).cxx_destruct;
- (id)containerContext;
- (void)setContainerContext:;
- (id)cellModelAtIndex:;
- (id)dataController;
- (void)updateModels;
@end
