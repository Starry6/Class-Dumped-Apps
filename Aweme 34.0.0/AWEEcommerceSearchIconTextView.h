@interface AWEEcommerceSearchIconTextView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) AWEEcommerceSearchStyleLabel textLabel;
@property (nonatomic) AWESearchMerchandisePriceDiscountInfo model;
@property (nonatomic) double spaceBtwIconAndText;
- (void)configWithTagModel:;
- (double)spaceBtwIconAndText;
- (void)setSpaceBtwIconAndText:;
- (id)textLabel;
- (void)setModel:;
- (id)initWithFrame:;
- (id)iconView;
- (id)model;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
