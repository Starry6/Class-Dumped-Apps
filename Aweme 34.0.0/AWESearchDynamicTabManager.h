@interface AWESearchDynamicTabManager : NSObject
@property (nonatomic) AWESearchResultViewController searchResultVC;
@property (nonatomic) <AWEHttpTask> dynamicTabTask;
- (void)setDynamicTabTask:;
- (id)searchResultVC;
- (void)setSearchResultVC:;
- (id)dynamicTabTask;
- (void)fetchDynamicTabsWithCompletion:;
- (void)cancelDynamicTabTask;
- (id)initWithSearchResultVC:;
- (void).cxx_destruct;
@end
