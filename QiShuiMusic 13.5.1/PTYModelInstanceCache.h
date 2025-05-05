@interface PTYModelInstanceCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) NSLock lock;
- (id)load:pop:;
- (id)init;
- (void)setCache:;
- (void)save:;
- (id)lock;
- (void).cxx_destruct;
- (id)cache;
- (void)setLock:;
+ (id)sharedInstance;
@end
