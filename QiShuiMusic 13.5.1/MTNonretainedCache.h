@interface MTNonretainedCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
- (id)init;
- (void)setCache:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)cache;
- (id)objectForKeyedSubscript:creation:;
@end
