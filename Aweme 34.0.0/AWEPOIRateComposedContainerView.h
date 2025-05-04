@interface AWEPOIRateComposedContainerView : UIView
@property (nonatomic) AWEPOIRateComposedLabel rateLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel goodsLabel;
@property (nonatomic) YYLabel tagLabel;
@property (nonatomic) Q scene;
- (void)p_setupUI;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)configWithRateGrade:rateContent:rateOrder:rateType:;
- (id)rateLabel;
- (id)goodsLabel;
- (void)setRateLabel:;
- (void)setGoodsLabel:;
- (void)setScene:;
- (void)setDescriptionLabel:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)initWithScene:;
- (void)reset;
- (id)descriptionLabel;
@end
