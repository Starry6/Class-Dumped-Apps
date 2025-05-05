@interface AFMyriadGoodnessScoreContext : NSObject
@property (nonatomic) NSSet reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic) BOOL recentlyWonBySmallAmount;
- (id)init;
- (id)reasons;
- (void).cxx_destruct;
- (id)description;
- (void)setReasons:;
- (void)setOverridingContext:;
- (id)getOverridingContext;
- (double)mediaPlaybackInterruptedTime;
- (void)setMediaPlaybackInterruptedTime:;
- (BOOL)recentlyWonBySmallAmount;
- (void)setRecentlyWonBySmallAmount:;
@end
