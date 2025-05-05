@interface TTAAccountVerifyRequestModel : NSObject
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString email;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString password;
@property (nonatomic) NSString verifyTicket;
- (void)setVerifyTicket:;
- (id)verifyTicket;
- (void)setPassword:;
- (id)password;
- (id)userName;
- (void)setEmail:;
- (void)setUserName:;
- (void).cxx_destruct;
- (id)email;
- (id)mobile;
- (void)setMobile:;
@end
