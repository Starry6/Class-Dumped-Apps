@interface TTAGetOAuthTokenRespDataModel : TTADataRespModel
@property (nonatomic) NSString access_token;
@property (nonatomic) NSString expires_in;
@property (nonatomic) NSString open_id;
@property (nonatomic) NSString refresh_expires_in;
@property (nonatomic) NSString refresh_token;
@property (nonatomic) NSString scopes;
@property (nonatomic) q refresh_time;
- (id)open_id;
- (id)access_token;
- (id)refresh_expires_in;
- (long long)refresh_time;
- (void)setAccess_token:;
- (void)setOpen_id:;
- (void)setRefresh_expires_in:;
- (void)setRefresh_time:;
- (id)scopes;
- (void).cxx_destruct;
- (void)setScopes:;
- (id)expires_in;
- (id)refresh_token;
- (void)setExpires_in:;
- (void)setRefresh_token:;
@end
