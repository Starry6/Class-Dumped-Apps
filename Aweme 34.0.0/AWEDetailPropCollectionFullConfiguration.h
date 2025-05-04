@interface AWEDetailPropCollectionFullConfiguration : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_configureLayoutForCell:;
- (void)p_configureUIForCell:;
- (void)configureContainerView:collectionView:;
- (void)configureCollectionViewCell:withURLModel:;
- (id)containerSize;
- (id)cellSize;
- (id)collectionViewContentInset;
@end
