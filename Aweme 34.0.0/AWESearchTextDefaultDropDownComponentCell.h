@interface AWESearchTextDefaultDropDownComponentCell : AWEMerchandiseComponentCellDropDown
- (void)configWithComponentModel:filterManager:;
- (id)initWithFrame:;
+ (double)titleWidthWithModel:filterManager:;
+ (BOOL)isSelectWithModel:filterManager:;
+ (void)configDisplayTextWithModel:filterManager:;
+ (id)identifier;
@end
