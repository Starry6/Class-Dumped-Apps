@interface AWETheaterMoreFeedDataController : AWEBaseDataController
@property (nonatomic) AWETheaterMoreFeedRequestModel requestModel;
- (void)loadMoreWithCompletion:;
- (void)setRequestModel:;
- (void)fetchWithCompletion:fetchType:;
- (id)requestModel;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
