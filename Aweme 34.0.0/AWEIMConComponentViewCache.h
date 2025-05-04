@interface AWEIMConComponentViewCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) NSDictionary limitCountConfig;
- (void)p_trimWithDefault:;
- (id)limitCountConfig;
- (void)setLimitCountConfig:;
- (void)setCache:;
- (id)cache;
- (id)initWithConfig:;
- (id)viewForKey:;
- (BOOL)setView:forKey:;
- (void).cxx_destruct;
@end
