@interface MPSafeMap : NSObject
- (id)init;
- (void)dealloc;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)description;
- (void)removeObjectForKey:;
@end
