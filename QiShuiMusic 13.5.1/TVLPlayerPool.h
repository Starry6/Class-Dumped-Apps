@interface TVLPlayerPool : NSObject
@property (nonatomic) NSMutableArray playerArray;
@property (nonatomic) q maxQueueSize;
- (void)setPlayerArray:;
- (id)initWithMaxQueueSize:;
- (long long)maxQueueSize;
- (id)playerArray;
- (void)recylePlayer:;
- (void)setMaxQueueSize:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
