@interface TTASNSSDKAuthCallbackRespModel : TTABaseRespModel
@property (nonatomic) NSString session_key;
@property (nonatomic) BOOL new_user;
@property (nonatomic) BOOL new_platform;
@property (nonatomic) NSNumber should_bind_mobile;
@property (nonatomic) TTASNSSDKAuthCallbackModel data;
- (BOOL)isAuthPlatformConflict;
- (BOOL)isBindConflict;
- (BOOL)isBindFailed;
- (BOOL)new_platform;
- (BOOL)new_user;
- (void)setNew_platform:;
- (void)setNew_user:;
- (void)setShould_bind_mobile:;
- (id)should_bind_mobile;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (id)session_key;
- (void)setSession_key:;
@end
