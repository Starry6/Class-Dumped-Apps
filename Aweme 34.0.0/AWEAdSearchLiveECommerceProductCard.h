@interface AWEAdSearchLiveECommerceProductCard : UIView
@property (nonatomic) UIView eCommerceProductView;
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) UIView imageDescContainer;
@property (nonatomic) UIView imageDescCircleView;
@property (nonatomic) UILabel goodsImageDescLabel;
@property (nonatomic) YYLabel infoLabel;
@property (nonatomic) UILabel currencySymbolLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel extraInfoLabel;
@property (nonatomic) AWEAdSearchLiveECommerceProductCardModel model;
@property (nonatomic) NSArray models;
@property (nonatomic) UIButton learnMoreBtn;
@property (nonatomic) AWEAdTagView adTagView;
@property (nonatomic) UICollectionView eCommerceProductListCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEAdSearchLiveECommerceProductCardDelegate> delegate;
- (id)adTagView;
- (void)setupSubview;
- (id)eCommerceProductListCollectionView;
- (id)eCommerceProductView;
- (id)goodsImageView;
- (id)imageDescContainer;
- (id)goodsImageDescLabel;
- (id)imageDescCircleView;
- (id)learnMoreBtn;
- (id)currencySymbolLabel;
- (id)extraInfoLabel;
- (void)updateExtraInfoLabelWithModel:;
- (void)eCommerceProductView:;
- (void)setECommerceProductView:;
- (void)setGoodsImageView:;
- (void)setImageDescContainer:;
- (void)setImageDescCircleView:;
- (void)setGoodsImageDescLabel:;
- (void)setCurrencySymbolLabel:;
- (void)setExtraInfoLabel:;
- (void)setLearnMoreBtn:;
- (void)setAdTagView:;
- (void)setECommerceProductListCollectionView:;
- (void)updateWithECommerceList:;
- (double)liveECommerceProductCardHeight;
- (void)updateWithECommerceModel:;
- (void)setModel:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setModels:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)models;
- (id)infoLabel;
- (void)setInfoLabel:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
