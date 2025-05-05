@interface ASCOverlaySettings : NSObject
@property (nonatomic) NSNumber rateLimitRequestsPerSecond;
@property (nonatomic) NSNumber rateLimitTimeWindow;
@property (nonatomic) NSNumber overlaysLoadTimeout;
- (id)_init;
- (id)overlaysLoadTimeout;
- (void)setOverlaysLoadTimeout:;
- (id)rateLimitRequestsPerSecond;
- (void)setRateLimitRequestsPerSecond:;
- (id)rateLimitTimeWindow;
- (void)setRateLimitTimeWindow:;
+ (id)sharedSettings;
@end
