@interface AWEIMGroupImpl.FriendsAlbumViewController : UIViewController
- (BOOL)canShowInnerPush;
- (id)zoomTransitionStartViewForOffset:;
- (double)zoomTransitionTargetViewCornerRadius;
- (id)focusViewFixedFrame;
- (id)mediaDetailTransitionStartView;
- (void)viewDidLoad;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)initWithCoder:;
@end
