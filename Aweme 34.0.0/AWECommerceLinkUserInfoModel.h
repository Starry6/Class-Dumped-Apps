@interface AWECommerceLinkUserInfoModel : MTLModel
@property (nonatomic) q authStatus;
@property (nonatomic) q authType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasLinkPermission;
- (BOOL)hasJoinInLink;
- (BOOL)shouldAuthorizedLink;
- (long long)authType;
- (void)setAuthType:;
- (long long)authStatus;
- (void)setAuthStatus:;
+ (id)JSONKeyPathsByPropertyKey;
@end
