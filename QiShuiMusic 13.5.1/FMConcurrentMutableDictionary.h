@interface FMConcurrentMutableDictionary : NSObject
@property (nonatomic) NSMutableDictionary underlyingDictionary;
@property (nonatomic) FMReadWriteLock lock;
@property (nonatomic) Q count;
- (id)init;
- (void)setUnderlyingDictionary:;
- (void)setObject:forKey:;
- (id)replaceObject:forKey:;
- (id)objectForKey:withConstructor:;
- (id)initWithDictionary:;
- (id)nativeDictionary;
- (void)removeAllObjects;
- (id)lock;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)popObjectforKey:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)underlyingDictionary;
- (void)setLock:;
@end
