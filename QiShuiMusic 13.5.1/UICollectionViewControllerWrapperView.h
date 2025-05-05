@interface UICollectionViewControllerWrapperView : UIView
- (id)_deepestActionResponder;
- (void)didMoveToSuperview;
- (id)_collectionViewController;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)preferredFocusedView;
@end
