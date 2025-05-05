@interface CMOdometerProxy : NSObject
@property (nonatomic) CMOdometer odometer;
@property (nonatomic) double totalDistance;
@property (nonatomic) double averageSpeed;
@property (nonatomic) double startDate;
@property (nonatomic) double totalCyclingDistance;
@property (nonatomic) double cyclingStartDate;
- (double)startDate;
- (void)dealloc;
- (void)setStartDate:;
- (id)odometer;
- (void)_teardown;
- (void)setTotalDistance:;
- (double)totalDistance;
- (id)initWithOdometer:;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:;
- (void)_stopOdometerUpdates;
- (void)_startCyclingWorkoutDistanceUpdatesWithHandler:;
- (void)_stopCyclingWorkoutDistanceUpdates;
- (void)setOdometer:;
- (double)averageSpeed;
- (void)setAverageSpeed:;
- (double)totalCyclingDistance;
- (void)setTotalCyclingDistance:;
- (double)cyclingStartDate;
- (void)setCyclingStartDate:;
@end
