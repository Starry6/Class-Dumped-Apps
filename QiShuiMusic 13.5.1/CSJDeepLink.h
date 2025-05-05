@interface CSJDeepLink : NSObject
@property (nonatomic) NSString deepLinkURL;
@property (nonatomic) NSString fallbackURL;
@property (nonatomic) q fallbackType;
@property (nonatomic) Q subLinkOpenType;
@property (nonatomic) NSString subLinkUrl;
@property (nonatomic) NSDictionary addonParams;
- (unsigned long long)subLinkOpenType;
- (void)setAddonParams:;
- (id)addonParams;
- (id)getRealDeepLinkURL;
- (long long)getRealFallbackType;
- (id)getRealFallbackURL;
- (void)setFallbackType:;
- (void)setSubLinkOpenType:;
- (void)setSubLinkUrl:;
- (void)setupDataWithDictionary:;
- (id)subLinkUrl;
- (id)fallbackURL;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)fallbackType;
- (id)deepLinkURL;
- (void)setDeepLinkURL:;
- (void)setFallbackURL:;
@end
