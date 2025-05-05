@interface ICJSSignConfiguration : NSObject
@property (nonatomic) NSString signatureDataCookieName;
@property (nonatomic) NSString signatureDataHeaderName;
- (void)setSignatureDataHeaderName:;
- (void)includeCookieWithName:;
- (void)_addRequestComponent:withName:;
- (id)signatureDataHeaderName;
- (void)includeHeaderWithName:;
- (void).cxx_destruct;
- (void)_enumerateComponentsUsingBlock:;
- (void)includeQueryItemWithName:;
- (id)signatureDataCookieName;
- (void)setSignatureDataCookieName:;
- (id)copyWithZone:;
+ (id)storePlatformConfiguration;
@end
