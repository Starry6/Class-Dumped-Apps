@interface AWEPOIShareModel : AWEShareModel
@property (nonatomic) NSString lifeShareStr;
@property (nonatomic) BOOL enableQrCodeShareLynx;
@property (nonatomic) NSDictionary qrCodeShareInfo;
@property (nonatomic) NSDictionary clientShareInfo;
- (id)lifeShareExt;
- (id)lifeShareStr;
- (id)clientShareInfo;
- (id)qrCodeShareInfo;
- (id)qrCodeTemplateUrl;
- (void)setLifeShareStr:;
- (BOOL)enableQrCodeShareLynx;
- (void)setEnableQrCodeShareLynx:;
- (void)setQrCodeShareInfo:;
- (void)setClientShareInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
