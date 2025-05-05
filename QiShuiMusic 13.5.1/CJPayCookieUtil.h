@interface CJPayCookieUtil : NSObject
@property (nonatomic) @? cookieBlock;
- (void)setCookieBlock:;
- (id)_getCookieDic:;
- (id)cjpayExtraParams;
- (void)cleanCookies;
- (id)cookieBlock;
- (id)getEnvParams;
- (id)getWKCookieScript:;
- (id)getWebCommonScipt:;
- (void)setupCookie:;
- (void).cxx_destruct;
+ (id)sharedUtil;
@end
