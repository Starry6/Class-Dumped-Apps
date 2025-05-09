@interface IESLiveWalletRedeemView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView topContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView redeemContainer;
@property (nonatomic) UILabel redeemDescLabel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UICollectionViewFlowLayout collectionLayout;
@property (nonatomic) BOOL disableSelectItem;
@property (nonatomic) IESLiveWalletRedeemItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)redeemContainer;
- (id)redeemDescLabel;
- (void)tr_redeemPanelClickWithDiamond:;
- (id)appendTrackParamsToSchema:;
- (id)arrow;
- (id)descLabel;
- (BOOL)disableSelectItem;
- (void)p_popRedeemConfirmAlertView:;
- (id)p_rebateToastViewWithGold:diamond:;
- (BOOL)p_shouldShowRedeemAlert;
- (void)p_showRedeemToast;
- (void)p_tapRedeem;
- (void)p_updateCollectionData;
- (void)setArrow:;
- (void)setDescLabel:;
- (void)setDisableSelectItem:;
- (void)setRedeemContainer:;
- (void)setRedeemDescLabel:;
- (void)setTopContainer:;
- (id)topContainer;
- (void)tr_redeemPanelShow;
- (void)tr_redeemPopupClick:gold:notRemind:;
- (void)tr_redeemPopupShow;
- (void)tr_redeemSuccess:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)item;
- (void)setTitleLabel:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)containerView;
- (void)setContainerView:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setItem:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (id)titleLabel;
- (void)setupUI;
- (id)collectionLayout;
- (void)setCollectionLayout:;
@end
