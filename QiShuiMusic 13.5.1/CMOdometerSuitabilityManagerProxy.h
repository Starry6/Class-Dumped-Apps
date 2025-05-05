@interface CMOdometerSuitabilityManagerProxy : NSObject
@property (nonatomic) CMOdometerSuitabilityManager odometerSuitabilityManager;
@property (nonatomic) double startDate;
@property (nonatomic) double suitableForRunning;
@property (nonatomic) double suitableForWalking;
- (double)startDate;
- (void)dealloc;
- (void)setStartDate:;
- (void)_teardown;
- (double)suitableForRunning;
- (double)suitableForWalking;
- (void)_startDaemonConnection;
- (id)initWithOdometerSuitability:;
- (void)_startOdometerSuitabilityUpdatesWithHandler:;
- (void)_stopOdometerSuitabilityUpdates;
- (id)odometerSuitabilityManager;
- (void)setOdometerSuitabilityManager:;
- (void)setSuitableForRunning:;
- (void)setSuitableForWalking:;
@end
