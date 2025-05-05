@interface IMWeakObjectCache : NSObject
- (id)init;
- (void)dealloc;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)copyOrSetObject:forKey:;
- (id)copyObjectForKey:;
- (void)removeObject:key:;
+ (id)sharedInstance;
@end
