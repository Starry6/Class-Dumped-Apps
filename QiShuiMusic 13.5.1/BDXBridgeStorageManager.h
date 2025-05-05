@interface BDXBridgeStorageManager : NSObject
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) NSString currentDomain;
- (void)setCurrentDomain:;
- (id)initWithDomain:;
- (void)setObject:forKey:;
- (id)allKeys;
- (id)currentDomain;
- (id)userDefaults;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
+ (id)sharedManager;
@end
