@interface IESECGoodsDetailRankingListComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsDetailModel goodsModel;
@property (nonatomic) UILabel rankLabel;
@property (nonatomic) UIImageView rankBrandImageView;
@property (nonatomic) UIImageView rankingIconImageView;
@property (nonatomic) UIImageView rightArrowImageView;
@property (nonatomic) UILabel topLabel;
- (id)goodsModel;
- (id)initWithParameters:style:tracker:;
- (void)openRankList;
- (id)rankBrandImageView;
- (id)rankingIconImageView;
- (id)rightArrowImageView;
- (void)setGoodsModel:;
- (void)setRankBrandImageView:;
- (void)setRankingIconImageView:;
- (void)setRightArrowImageView:;
- (void)updateUIWithRankModel:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:;
- (id)rankLabel;
- (void)setRankLabel:;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
