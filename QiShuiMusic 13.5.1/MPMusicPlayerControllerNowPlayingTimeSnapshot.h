@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject
@property (nonatomic) BOOL live;
@property (nonatomic) double currentTime;
@property (nonatomic) float rate;
@property (nonatomic) q state;
- (float)rate;
- (BOOL)isLive;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)state;
- (double)currentTime;
- (id)_init;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)liveSnapshotWithRate:state:;
+ (id)snapshotWithElapsedTime:duration:rate:atTimestamp:state:;
@end
