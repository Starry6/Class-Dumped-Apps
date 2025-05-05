@interface IESECPriceFontStyle : MTLModel
@property (nonatomic) IESECTextStyle integerFontStyle;
@property (nonatomic) IESECTextStyle decimalFontStyle;
@property (nonatomic) IESECTextStyle priceTagFontStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)decimalFontStyle;
- (id)integerFontStyle;
- (id)priceTagFontStyle;
- (void)setDecimalFontStyle:;
- (void)setIntegerFontStyle:;
- (void)setPriceTagFontStyle:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
