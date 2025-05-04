@interface AWEShareGridView : AWEShareCollectionView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithItems:hostView:;
- (void)updateCell:withItem:;
- (double)preferredInterItemSpacing;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)setContentSize:;
- (id)intrinsicContentSize;
+ (Class)cellClass;
+ (id)collectionLayout;
@end
