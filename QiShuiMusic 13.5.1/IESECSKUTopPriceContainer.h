@interface IESECSKUTopPriceContainer : UIView
@property (nonatomic) IESECSKUNewPriceView mainPrice;
@property (nonatomic) IESECSKUNewPriceView subPrice;
- (id)mainPrice;
- (void)setMainPrice:;
- (void)setSubPrice:;
- (id)subPrice;
- (void)updateWithViewModel:MaxWidth:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)priceSizeFromSizeParams:;
+ (id)priceSizesAndDiscountTypeFromViewModel:;
+ (id)sizeWithViewModel:MaxWidth:;
@end
