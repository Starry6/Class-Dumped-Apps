@interface IESPrefetchDefaultCacheStorage : NSObject
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchAllKeys;
- (id)fetchObjectForKey:;
- (id)initWithSuite:;
- (void)setUserDefaults:;
- (id)userDefaults;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)saveObject:forKey:;
@end
