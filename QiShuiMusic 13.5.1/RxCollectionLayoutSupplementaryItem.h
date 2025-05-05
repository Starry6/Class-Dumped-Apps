@interface RxCollectionLayoutSupplementaryItem : RxCollectionLayoutItem
@property (nonatomic) NSString elementKind;
@property (nonatomic) RxCollectionLayoutAnchor containerAnchor;
@property (nonatomic) RxCollectionLayoutAnchor itemAnchor;
@property (nonatomic) q zIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (id)elementKind;
- (id)containerAnchor;
- (id)supplementaryItem;
- (id)itemAnchor;
- (id)boundarySupplementaryItem;
- (void)setContainerAnchor:;
- (void)setZIndex:;
- (void).cxx_destruct;
- (void)setItemAnchor:;
- (long long)zIndex;
- (id)initWithSize:contentInsets:elementKind:containerAnchor:itemAnchor:zIndex:;
- (id)decorationItem;
- (void)setElementKind:;
- (id)copyWithZone:;
+ (id)supplementaryItemWithLayoutSize:elementKind:containerAnchor:;
+ (id)supplementaryItemWithLayoutSize:elementKind:containerAnchor:itemAnchor:;
@end
