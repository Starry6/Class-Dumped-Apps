@interface AWENewScanImpl.QRCodeModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel qrcodeURL;
@property (nonatomic) NSNumber qrCodeType;
@property (nonatomic) AWEURLModel avatarURL;
@property (nonatomic) q expireTimeInSecond;
@property (nonatomic) NSString eventExtra;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)qrcodeURL;
- (void)setQrcodeURL:;
- (id)qrCodeType;
- (void)setQrCodeType:;
- (long long)expireTimeInSecond;
- (void)setExpireTimeInSecond:;
- (id)eventExtra;
- (void)setEventExtra:;
- (id)qrcodeURLJSONTransformer;
- (id)avatarURLJSONTransformer;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
