@interface AWEIMVerticalEmoticonCollectionView : AWEIMBaseCollectionView
@property (nonatomic) <AWEIMVerticalEmoticonCollectionViewProtocol> verticalEmoticonDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableShowHeader;
- (id)getModelWithSession:indexPath:;
- (id)getThemeSessionWithSession:;
- (long long)getTypeWithSection:;
- (void)setVerticalEmoticonDelegate:;
- (id)verticalEmoticonDelegate;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
@end
