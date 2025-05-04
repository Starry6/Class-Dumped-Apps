@interface AWEVideoCachePrefetchTask : AWEVideoCacheRequestTask
- (void)setUpPrefetchTask;
- (id)initWithURL:cacheURL:queue:;
- (BOOL)startWithSize:;
- (id)initWithURL:queue:;
+ (id)taskWithURL:queue:;
+ (id)taskWithURL:cacheURL:queue:;
@end
