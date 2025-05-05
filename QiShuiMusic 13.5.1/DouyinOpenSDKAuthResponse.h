@interface DouyinOpenSDKAuthResponse : DouyinOpenSDKBaseResponse
@property (nonatomic) NSString code;
@property (nonatomic) NSString state;
@property (nonatomic) NSOrderedSet grantedPermissions;
- (void)setState:;
- (id)code;
- (id)state;
- (void).cxx_destruct;
- (void)setCode:;
- (id)grantedPermissions;
- (void)setGrantedPermissions:;
@end
