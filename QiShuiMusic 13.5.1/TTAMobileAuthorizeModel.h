@interface TTAMobileAuthorizeModel : TTADataRespModel
@property (nonatomic) NSString token;
@property (nonatomic) NSDictionary user_info;
- (void)setUser_info:;
- (id)user_info;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
@end
