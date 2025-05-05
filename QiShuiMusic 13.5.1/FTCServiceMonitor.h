@interface FTCServiceMonitor : NSObject
@property (nonatomic) q serviceType;
- (void)dealloc;
- (long long)serviceType;
- (void)_postAvailability:;
- (void)_updateAvailability;
- (id)initWithServiceType:;
- (void)updateAvailability;
- (long long)serviceAvailability;
@end
