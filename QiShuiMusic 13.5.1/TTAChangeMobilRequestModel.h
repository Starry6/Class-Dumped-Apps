@interface TTAChangeMobilRequestModel : NSObject
@property (nonatomic) NSString captcha;
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString codeString;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString unusableMobileTicket;
@property (nonatomic) NSDictionary customParams;
- (id)captcha;
- (id)codeString;
- (id)customParams;
- (void)setCaptcha:;
- (void)setCodeString:;
- (void)setCustomParams:;
- (void)setUnusableMobileTicket:;
- (id)unusableMobileTicket;
- (id)authToken;
- (void)setAuthToken:;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
- (id)mobile;
- (void)setMobile:;
@end
