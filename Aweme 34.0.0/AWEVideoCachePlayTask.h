@interface AWEVideoCachePlayTask : AWEVideoCacheRequestTask
@property (nonatomic) <AWEVideoPlayerInternalDelegate> internalDelegate;
- (id)initWithURL:queue:internalDelegate:;
- (id)subdataWithRange:error:;
- (id)internalDelegate;
- (void)setInternalDelegate:;
- (void).cxx_destruct;
+ (id)taskWithURL:queue:internalDelegate:;
@end
