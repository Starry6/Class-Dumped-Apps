@interface AWEEcommerceSearchFindSimilarView : UIView
@property (nonatomic) UIImageView findSimilarGoodsImageView;
@property (nonatomic) UIView imageShadowView1;
@property (nonatomic) UIView imageShadowView2;
@property (nonatomic) UILabel findSimilarLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel merchandiseModel;
@property (nonatomic) <AWEEcommerceSearchFeedbackPanelProtocol> delegate;
- (id)merchandiseModel;
- (void)setMerchandiseModel:;
- (void)updateWithMerchandiseModel:;
- (void)clickFindSimilarView:;
- (id)imageShadowView2;
- (id)imageShadowView1;
- (id)findSimilarGoodsImageView;
- (id)findSimilarLabel;
- (void)setFindSimilarGoodsImageView:;
- (void)setImageShadowView1:;
- (void)setImageShadowView2:;
- (void)setFindSimilarLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)arrowView;
- (void)setArrowView:;
@end
