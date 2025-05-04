@interface AWESearchAwemeDetailInnerController : AWEAwemeNewDetailBaseController
@property (nonatomic) NSString distinctInnerId;
@property (nonatomic) q initIndex;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (void)initialFetchCompletion:error:;
- (void)liveCellWillDisplay:forRowAtIndexPath:tableView:;
- (void)setDistinctInnerId:;
- (void)reportInnerDocShowWithIndexPath:;
- (id)distinctInnerId;
- (void)setInitIndex:;
- (BOOL)enableSearchInnerReportDocShow;
- (long long)initIndex;
- (void).cxx_destruct;
@end
