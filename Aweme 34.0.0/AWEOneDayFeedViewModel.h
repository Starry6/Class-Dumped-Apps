@interface AWEOneDayFeedViewModel : AWEBaseListViewModel
@property (nonatomic) AWEOneDayDailyDataController dataController;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setDataController:;
- (id)lifeStoryAtIndex:;
- (void)deleteStoryAtIndex:completeBlock:;
- (id)createItemModelsWithUserStorys:;
- (void)handleResponse:;
- (void).cxx_destruct;
- (id)dataController;
@end
