@interface CPNavigationSession : NSObject
@property (nonatomic) CPTrip trip;
@property (nonatomic) CPMapTemplate mapTemplate;
@property (nonatomic) NAFuture navigationSessionManagerFuture;
@property (nonatomic) <CPNavigationSessionManaging> manager;
@property (nonatomic) NSArray upcomingManeuvers;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
- (id)initWithTrip:mapTemplate:;
- (id)_currentTripId;
- (void)pauseTripForReason:description:;
- (void)pauseTripForReason:description:turnCardColor:;
- (void)finishTrip;
- (void)cancelTrip;
- (void)setUpcomingManeuvers:;
- (void)updateTravelEstimates:forManeuver:;
- (id)upcomingManeuvers;
- (id)trip;
- (void)setTrip:;
- (id)mapTemplate;
- (void)setMapTemplate:;
- (id)navigationSessionManagerFuture;
- (void)setNavigationSessionManagerFuture:;
@end
