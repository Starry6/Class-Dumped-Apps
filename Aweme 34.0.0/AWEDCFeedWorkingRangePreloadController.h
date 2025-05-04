@interface AWEDCFeedWorkingRangePreloadController : AWEDCFeedBaseController
@property (nonatomic) BOOL disableLoadmore;
- (void)sectionControllerWillEnterWorkingRange:;
- (void)containerScrollViewWillBeginDragging:;
- (void)containerBeforeViewDidLoad;
- (BOOL)disableLoadmore;
- (void)setDisableLoadmore:;
@end
