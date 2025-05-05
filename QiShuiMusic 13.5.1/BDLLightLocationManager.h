@interface BDLLightLocationManager : NSObject
@property (nonatomic) BDLLightLocationResult lightLocationresult;
@property (nonatomic) BOOL hasConsumed;
@property (nonatomic) BOOL isDone;
@property (nonatomic) NSMutableArray monitorDoneArray;
@property (nonatomic) BOOL isAfterMonitorDoneCompletion;
- (void)setHasConsumed:;
- (void)addMonitorForLightLocationDoneWithCompletion:;
- (void)getCoreLocationLastLocationWithAccuracy:;
- (id)getLightLocation;
- (BOOL)hasConsumed;
- (BOOL)isAfterMonitorDoneCompletion;
- (void)lightLocationDone;
- (id)lightLocationresult;
- (id)monitorDoneArray;
- (void)requestLightLocationWithAccuracy:;
- (void)setIsAfterMonitorDoneCompletion:;
- (void)setLightLocationresult:;
- (void)setMonitorDoneArray:;
- (id)init;
- (void)dealloc;
- (BOOL)isDone;
- (void)setIsDone:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
