@interface AWEPaySwiftImpl.CCMEntryPagePromotionInfo : MTLModel
@property (nonatomic) NSString businessType;
@property (nonatomic) _TtC15AWEPaySwiftImpl19CCMGoOpenPromotions goOpenPromotions;
@property (nonatomic) _TtC15AWEPaySwiftImpl22CCMQRCodePromotionInfo qrCodePromotion;
- (void)setBusinessType:;
- (id)goOpenPromotions;
- (void)setGoOpenPromotions:;
- (id)qrCodePromotion;
- (void)setQrCodePromotion:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)businessType;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
