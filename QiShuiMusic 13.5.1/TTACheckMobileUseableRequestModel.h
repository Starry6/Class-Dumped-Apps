@interface TTACheckMobileUseableRequestModel : NSObject
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString notLoginTicket;
- (id)notLoginTicket;
- (void)setNotLoginTicket:;
- (id)authToken;
- (void)setAuthToken:;
- (void).cxx_destruct;
- (id)mobile;
- (void)setMobile:;
@end
