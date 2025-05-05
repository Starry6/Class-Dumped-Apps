@interface BWSimpleCache : NSObject
- (id)init;
- (void)dealloc;
- (void)cacheObject:forKey:;
- (id)copyAndClearObjectForKey:;
@end
