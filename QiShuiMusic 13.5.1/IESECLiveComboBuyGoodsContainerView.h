@interface IESECLiveComboBuyGoodsContainerView : UIStackView
@property (nonatomic) UIImageView comboBuyTagView;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {CGSize=dd} comboBuyTagSize;
@property (nonatomic) Q comboBuyViewScene;
@property (nonatomic) NSArray combinationItemsArray;
@property (nonatomic) NSString tagImageURL;
@property (nonatomic) <IESECLiveGoodsCombinationContainerViewClickDelegate> delegate;
- (id)comboBuyTagView;
- (void)setTagImageURL:;
- (id)comboBuyTagSize;
- (void)addCombinationGoodsCardWithModel:index:;
- (id)combinationItemsArray;
- (unsigned long long)comboBuyViewScene;
- (void)goodsImageViewClickWithIndex:;
- (void)setCombinationItemsArray:;
- (void)setComboBuyTagSize:;
- (void)setComboBuyTagView:;
- (void)setComboBuyViewScene:;
- (id)tagImageURL;
- (id)initWithScene:;
- (void)setDelegate:;
- (id)imageSize;
- (id)delegate;
- (void).cxx_destruct;
- (void)setImageSize:;
@end
