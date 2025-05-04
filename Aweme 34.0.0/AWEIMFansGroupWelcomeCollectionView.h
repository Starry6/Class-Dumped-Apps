@interface AWEIMFansGroupWelcomeCollectionView : AWEIMBaseCollectionView
@property (nonatomic) NSString footerViewDefaultValue;
@property (nonatomic) AWEIMWelcomeEditFooterCollectionReusableView footerView;
@property (nonatomic) <AWEIMFansGroupWelcomeCollectionViewProtocol> welcomeDelegate;
@property (nonatomic) BOOL isShownInHalfScreen;
@property (nonatomic) BOOL useNewStyle;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:;
- (BOOL)enableNewStyle;
- (void)setFooterViewDefaultValue:;
- (id)footerViewDefaultValue;
- (BOOL)isShownInHalfScreen;
- (void)setIsShownInHalfScreen:;
- (id)welcomeDelegate;
- (void)registerWelcomeWithFooterViewDefaultValue:useSubtitle:;
- (void)setWelcomeDelegate:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)setFooterView:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)footerView;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)hitTest:withEvent:;
- (id)titles;
- (id)subtitles;
@end
