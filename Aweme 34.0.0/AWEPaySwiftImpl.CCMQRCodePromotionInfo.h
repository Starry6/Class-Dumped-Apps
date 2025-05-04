@interface AWEPaySwiftImpl.CCMQRCodePromotionInfo : MTLModel
@property (nonatomic) NSString discountText;
@property (nonatomic) NSString textColorHex;
@property (nonatomic) NSString lineColorHex;
@property (nonatomic) double lineWidth;
@property (nonatomic) NSString jumpURL;
- (id)jumpURL;
- (void)setJumpURL:;
- (id)discountText;
- (void)setDiscountText:;
- (id)textColorHex;
- (void)setTextColorHex:;
- (id)lineColorHex;
- (void)setLineColorHex:;
- (void)setLineWidth:;
- (id)initWithDictionary:error:;
- (double)lineWidth;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
