@interface AVExternalPlaybackMonitor : NSObject
@property (nonatomic) BOOL airPlayVideoActive;
@property (nonatomic) BOOL airPlayVideoPlaying;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isAirPlayVideoActive;
- (id)initWithFigRoutingSessionManager:;
- (BOOL)isAirPlayVideoPlaying;
+ (id)longFormVideoExternalPlaybackMonitor;
@end
