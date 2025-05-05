@interface TTAAuthLoginAuthorizeRespDataModel : TTADataRespModel
@property (nonatomic) NSString token;
@property (nonatomic) NSString user_id_str;
@property (nonatomic) TTAUserModel user_info;
- (void)setUser_id_str:;
- (void)setUser_info:;
- (id)user_id_str;
- (id)user_info;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
@end
