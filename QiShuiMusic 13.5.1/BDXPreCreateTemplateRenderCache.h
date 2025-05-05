@interface BDXPreCreateTemplateRenderCache : NSObject
@property (nonatomic) NSCache cache;
- (id)init;
- (void)setObject:forKey:;
- (void)setCache:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)cache;
- (void)removeObjectForKey:;
+ (id)sharedInstance;
@end
