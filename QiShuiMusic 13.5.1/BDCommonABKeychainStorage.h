@interface BDCommonABKeychainStorage : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) BOOL useUserDefaultCache;
- (id)initWithServiceName:useUserDefaultCache:;
- (BOOL)p_setObject:forKey:;
- (void)setUseUserDefaultCache:;
- (BOOL)useUserDefaultCache;
- (BOOL)removeAll;
- (BOOL)setObject:forKey:;
- (void)setServiceName:;
- (id)serviceName;
- (BOOL)removeValueForKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (BOOL)hasObjectForKey:;
@end
