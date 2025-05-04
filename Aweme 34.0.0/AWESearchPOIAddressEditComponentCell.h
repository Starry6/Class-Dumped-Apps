@interface AWESearchPOIAddressEditComponentCell : AWEMerchandiseComponentBaseCell
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel componentModel;
- (void)setComponentModel:;
- (id)componentModel;
- (void)configWithComponentModel:filterManager:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (double)widthWithComponentModel:filterManager:;
+ (id)identifier;
@end
