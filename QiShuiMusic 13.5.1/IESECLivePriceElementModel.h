@interface IESECLivePriceElementModel : MTLModel
@property (nonatomic) NSNumber priceNumber;
@property (nonatomic) double integerFont;
@property (nonatomic) double decimalFont;
@property (nonatomic) double dollarTagFont;
@property (nonatomic) NSString textColor;
@property (nonatomic) BOOL needBoldText;
@property (nonatomic) NSNumber maxWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDecimalFont:;
- (void)setPriceNumber:;
- (void)setIntegerFont:;
- (double)decimalFont;
- (double)dollarTagFont;
- (double)integerFont;
- (BOOL)needBoldText;
- (id)priceNumber;
- (void)setDollarTagFont:;
- (void)setNeedBoldText:;
- (id)maxWidth;
- (void)setMaxWidth:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
