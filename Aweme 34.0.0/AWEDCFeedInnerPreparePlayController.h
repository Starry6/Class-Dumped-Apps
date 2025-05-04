@interface AWEDCFeedInnerPreparePlayController : AWEDCFeedBaseController
- (void)detailTableViewControllerDidDisappear:currentAwemeModel:;
- (void)willEnterDetailVCAtIndexPath:withModel:referString:selectedCell:;
- (BOOL)enablePreparePlay:;
@end
