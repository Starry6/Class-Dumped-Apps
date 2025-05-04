@interface AWEMerchandiseComponentCellVerticalLine : AWEMerchandiseComponentBaseCell
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel component;
- (void)configWithComponentModel:filterManager:;
- (id)component;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (void)setComponent:;
+ (id)identifier;
@end
