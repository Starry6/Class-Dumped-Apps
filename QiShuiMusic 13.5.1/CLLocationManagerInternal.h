@interface CLLocationManagerInternal : NSObject
@property (nonatomic) NSMutableSet rangedRegions;
@property (nonatomic) NSMutableSet rangedConstraints;
@property (nonatomic) <CLLocationManagerDelegate> delegate;
@property (nonatomic) CLLocationManager manager;
- (void)setPausesLocationUpdatesAutomatically:;
- (void)dealloc;
- (BOOL)hasLingeringRangingRequest;
- (void)cancelRangingRequest;
- (BOOL)showsBackgroundLocationIndicator;
- (void)setDelegate:;
- (void)setAllowsBackgroundLocationUpdates:;
- (void)stopUpdatingLocationAutoPaused;
- (int)PausesLocationUpdatesAutomatically;
- (id)manager;
- (BOOL)allowsBackgroundLocationUpdates;
- (id)rangedRegions;
- (void)setShowsBackgroundLocationIndicator:;
- (void)setManager:;
- (void)performCourtesyPromptIfNeeded;
- (id)delegate;
- (void)cancelLocationRequest;
- (void).cxx_destruct;
- (id)rangedConstraints;
- (void)invalidate;
- (void)cancelLingeringRangingRequest;
- (id)initWithInfo:bundleIdentifier:bundlePath:websiteIdentifier:delegate:silo:;
@end
