@interface IESECGoodsFeedCompareDealsBarView : UIView
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) UILabel goodsDescriptionLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) NSString schema;
@property (nonatomic) UIView goodsImageMaskView;
@property (nonatomic) @? productClick;
- (id)goodsDescriptionLabel;
- (id)goodsImageMaskView;
- (id)goodsImageView;
- (void)initView;
- (id)productClick;
- (void)setGoodsDescriptionLabel:;
- (void)setGoodsImageMaskView:;
- (void)setGoodsImageView:;
- (void)setProductClick:;
- (void)updateUIWithModel:;
- (id)schema;
- (void)setSchema:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)addAction;
- (void)tapAction;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
