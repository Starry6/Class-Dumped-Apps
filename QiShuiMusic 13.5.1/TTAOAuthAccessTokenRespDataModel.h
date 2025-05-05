@interface TTAOAuthAccessTokenRespDataModel : TTADataRespModel
@property (nonatomic) NSString access_token;
@property (nonatomic) q expires_in;
@property (nonatomic) NSString refresh_token;
@property (nonatomic) q refresh_expires_in;
@property (nonatomic) NSString open_id;
@property (nonatomic) NSString scopes;
- (id)open_id;
- (id)access_token;
- (long long)refresh_expires_in;
- (void)setAccess_token:;
- (void)setOpen_id:;
- (void)setRefresh_expires_in:;
- (id)scopes;
- (void).cxx_destruct;
- (void)setScopes:;
- (long long)expires_in;
- (id)refresh_token;
- (void)setExpires_in:;
- (void)setRefresh_token:;
@end
