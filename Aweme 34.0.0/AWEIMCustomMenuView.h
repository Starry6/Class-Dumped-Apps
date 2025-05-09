@interface AWEIMCustomMenuView : UIView
@property (nonatomic) NSArray menuItemList;
@property (nonatomic) UIView menuItemsBaseView;
@property (nonatomic) UICollectionView menuItemsCollectionView;
@property (nonatomic) UIView triangleView;
@property (nonatomic) BOOL isAnimted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)triangleView;
- (void)setTriangleView:;
- (id)menuItemList;
- (void)setMenuItemList:;
- (id)initWithMenuItemList:;
- (void)showMenuForBubbleFrameInScreen:tapLocationInScreen:;
- (id)menuItemsCollectionView;
- (id)menuItemsBaseView;
- (void)setIsAnimted:;
- (void)showMenuForBubbleFrameInScreen:highLocationInScreen:lowLocationInScreen:tryHighLocationFirst:;
- (BOOL)isAnimted;
- (void)setMenuItemsBaseView:;
- (void)setMenuItemsCollectionView:;
- (void)collectionView:didUnhighlightItemAtIndexPath:;
- (void)collectionView:didHighlightItemAtIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)dismiss;
- (void)collectionView:didSelectItemAtIndexPath:;
- (BOOL)collectionView:shouldHighlightItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)hitTest:withEvent:;
+ (void)customMenuDismiss;
+ (void)showMenuForBubbleFrameInScreen:tapLocationInScreen:menuItemList:;
+ (id)menuFrameInScreen;
+ (void)customMenuDismissWithoutAnimation;
+ (void)showMenuForBubbleFrameInScreen:highLocationInScreen:lowLocationInScreen:tryHighLocationFirst:menuItemList:;
@end
