@interface AWEListenFeedFirstEnterTracker : NSObject
@property (nonatomic) double beginTS;
@property (nonatomic) BOOL reported;
- (void)beginTrack;
- (void)setBeginTS:;
- (double)beginTS;
- (BOOL)reported;
- (void)setReported:;
@end
