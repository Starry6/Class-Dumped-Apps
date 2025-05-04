@interface AWEIMFansCreatorRedpacketManager : NSObject
@property (nonatomic) NSCache userRoleIDsCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__clearCache;
- (void)__cacheInit;
- (id)userRoleIDsCache;
- (id)roleIDsWithUserID:;
- (void)cacheRoleIDs:withUserID:;
- (void)removeCachedRoleIDsWithUserID:;
- (void)setUserRoleIDsCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
