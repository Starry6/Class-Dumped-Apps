@interface CMOdometer : NSObject
@property (nonatomic) CMOdometerProxy odometerProxy;
@property (nonatomic) <CMOdometerDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)startOdometerUpdatesForActivity:withHandler:;
- (void)stopOdometerUpdates;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:;
- (void)stopCyclingWorkoutDistanceUpdates;
- (id)odometerProxy;
@end
