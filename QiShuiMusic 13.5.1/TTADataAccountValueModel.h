@interface TTADataAccountValueModel : TTADataRespModel
@property (nonatomic) q userType;
@property (nonatomic) q authType;
@property (nonatomic) NSArray oauthPlatforms;
@property (nonatomic) NSString valueTicket;
- (void)setValueTicket:;
- (id)oauthPlatforms;
- (void)setOauthPlatforms:;
- (id)valueTicket;
- (long long)userType;
- (void)setAuthType:;
- (long long)authType;
- (void).cxx_destruct;
- (void)setUserType:;
+ (id)tta_modelCustomPropertyMapper;
@end
