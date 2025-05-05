@interface AWEVideoCachePrefetchTask : AWEVideoCacheRequestTask
- (id)initWithURL:cacheURL:queue:;
- (void)setUpPrefetchTask;
- (BOOL)startWithSize:;
- (id)initWithURL:queue:;
+ (id)taskWithURL:cacheURL:queue:;
+ (id)taskWithURL:queue:;
@end
