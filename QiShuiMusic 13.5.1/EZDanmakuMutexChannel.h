@interface EZDanmakuMutexChannel : NSObject
@property (nonatomic) q index;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} channelRect;
@property (nonatomic) double nextAvailableTime;
- (void)setChannelRect:;
- (id)channelRect;
- (double)nextAvailableTime;
- (void)setNextAvailableTime:;
- (long long)index;
- (void)setIndex:;
@end
