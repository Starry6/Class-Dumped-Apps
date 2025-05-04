@interface AWEStoryImpl.StoryDataController : AWEStoryImpl.StoryListBaseController
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSArray awemeList;
- (BOOL)isRequestOnAir;
- (id)awemeList;
- (void)deleteAwemeWith:completion:;
- (void)reloadDataAt:;
- (void)fetchDataWith:;
- (id)init;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
@end
