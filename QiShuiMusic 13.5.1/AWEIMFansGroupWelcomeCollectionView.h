@interface AWEIMFansGroupWelcomeCollectionView : AWEIMBaseCollectionView
@property (nonatomic) NSString footerViewDefaultValue;
@property (nonatomic) AWEIMWelcomeEditFooterCollectionReusableView footerView;
@property (nonatomic) <AWEIMFansGroupWelcomeCollectionViewProtocol> welcomeDelegate;
@property (nonatomic) BOOL isShownInHalfScreen;
- (id)welcomeDelegate;
- (id)footerViewDefaultValue;
- (BOOL)isShownInHalfScreen;
- (void)registerWelcomeWithFooterViewDefaultValue:;
- (void)setFooterViewDefaultValue:;
- (void)setIsShownInHalfScreen:;
- (void)setWelcomeDelegate:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)setFooterView:;
- (id)footerView;
- (id)hitTest:withEvent:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)titles;
@end
