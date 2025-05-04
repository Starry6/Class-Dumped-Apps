@interface AWEXBridgeAccountService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shortID;
- (void)loginWithParamModel:completionHandler:;
- (void)logoutWithParamModel:completionHandler:;
- (BOOL)hasLoggedIn;
- (id)secureUserID;
- (id)avatarURLString;
- (id)boundPhone;
- (id)aAWEBDXBridgeLoginAdapter;
- (id)nickname;
- (id)userID;
- (id)uniqueID;
+ (Class)aAWEBDXBridgeLoginAdapterClass;
@end
