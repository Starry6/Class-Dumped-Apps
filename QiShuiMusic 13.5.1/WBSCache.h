@interface WBSCache : NSObject
- (id)init;
- (void)setObject:forKey:;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)_recacheObjectForKey:;
@end
