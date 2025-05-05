@interface CalFoundationPreferences : NSObject
@property (nonatomic) BOOL logAutoFlush;
@property (nonatomic) NSString logFilePath;
@property (nonatomic) NSArray logSimpleConfiguration;
@property (nonatomic) double simulatedDateForNowOffset;
@property (nonatomic) NSString stopTimeDemoMode;
@property (nonatomic) BOOL stopTimeDemoModeActive;
@property (nonatomic) NSDateComponents stopTimeDemoModeComponents;
- (id)init;
- (id)stopTimeDemoModeComponents;
- (id)logFilePath;
- (id)logSimpleConfiguration;
- (void)setStopTimeDemoMode:;
- (void)setSimulatedDateForNowOffset:;
- (id)stopTimeDemoMode;
- (void).cxx_destruct;
- (double)simulatedDateForNowOffset;
- (BOOL)stopTimeDemoModeActive;
- (BOOL)logAutoFlush;
+ (id)shared;
@end
