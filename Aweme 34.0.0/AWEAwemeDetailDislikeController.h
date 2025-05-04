@interface AWEAwemeDetailDislikeController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL isAppear;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)didDislikeAweme:;
- (long long)_findFirstOriginItemWithID:;
- (void)onScrollToIndex:animated:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:;
@end
