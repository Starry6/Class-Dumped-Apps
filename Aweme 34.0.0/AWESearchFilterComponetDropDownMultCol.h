@interface AWESearchFilterComponetDropDownMultCol : AWEMerchandiseComponentBaseCell
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel componentModel;
- (void)setComponentModel:;
- (id)componentModel;
- (void)configWithComponentModel:filterManager:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (BOOL)isSelectWithModel:filterManager:;
+ (double)widthWithComponentModel:filterManager:;
+ (id)displayTextWithComponentModel:filterManager:;
+ (id)identifier;
@end
