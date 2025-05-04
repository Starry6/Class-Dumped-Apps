@interface AWEPerfFMPCalculateManager : NSObject
@property (nonatomic) NSMutableArray calculators;
@property (nonatomic) double deviceScore;
@property (nonatomic) double timeThreshold;
- (double)deviceScore;
- (void)setDeviceScore:;
- (void)calculateFMPForView:startTime:respondToGesture:completion:;
- (double)defaultTimeThreshold;
- (void)calculateFMPForView:startTime:config:respondToGesture:delegate:completion:;
- (void)calculateFMPForView:startTime:completion:;
- (void)userInteractionHappened;
- (void)calculateFMPForView:startTime:timeThreshold:completion:;
- (void)calculateFMPForPage:view:startTime:completion:;
- (void)calculateFMPForPage:view:startTime:config:completion:;
- (void)updateRecordForView:fromContentChange:;
- (id)calculators;
- (void)setCalculators:;
- (id)init;
- (void).cxx_destruct;
- (void)setTimeThreshold:;
- (double)timeThreshold;
+ (void)swizzleFMPMethods;
+ (id)sharedInstance;
@end
