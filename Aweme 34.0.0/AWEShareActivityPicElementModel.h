@interface AWEShareActivityPicElementModel : AWEBaseApiModel
@property (nonatomic) AWEShareActivityPicConfigModel logo;
@property (nonatomic) AWEShareActivityPicConfigModel avatar;
@property (nonatomic) AWEShareActivityPicConfigModel name;
@property (nonatomic) AWEShareActivityPicConfigModel desc;
@property (nonatomic) AWEShareActivityPicConfigModel line;
@property (nonatomic) AWEShareActivityPicConfigModel qrCode;
- (void)setLogo:;
- (id)logo;
- (void)setDesc:;
- (id)desc;
- (id)line;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setLine:;
- (id)avatar;
- (void)setAvatar:;
- (id)qrCode;
- (void)setQrCode:;
+ (id)avatarJSONTransformer;
+ (id)logoJSONTransformer;
+ (id)lineJSONTransformer;
+ (id)qrCodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)nameJSONTransformer;
+ (id)descJSONTransformer;
@end
