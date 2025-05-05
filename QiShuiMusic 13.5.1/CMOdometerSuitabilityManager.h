@interface CMOdometerSuitabilityManager : NSObject
@property (nonatomic) CMOdometerSuitabilityManagerProxy odometerSuitabilityManagerProxy;
- (id)init;
- (void)dealloc;
- (void)startOdometerSuitabilityUpdatesWithHandler:;
- (void)stopOdometerSuitabilityUpdates;
- (id)odometerSuitabilityManagerProxy;
@end
