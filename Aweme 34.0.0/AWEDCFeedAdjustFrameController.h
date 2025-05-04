@interface AWEDCFeedAdjustFrameController : AWEDCFeedBaseController
@property (nonatomic) NSIndexPath seletedIndexPath;
@property (nonatomic) NSIndexPath targetIndexPath;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)containerViewWillAppear:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (id)classNameWithReferString;
- (void)setSeletedIndexPath:;
- (void)adjustCellPositionWithIndexPath:;
- (id)seletedIndexPath;
- (id)targetIndexPath;
- (void)setTargetIndexPath:;
- (void).cxx_destruct;
@end
