@interface AWERouterMate : NSObject
@property (nonatomic) NSCache cache;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
+ (id)sharedInstance;
@end
