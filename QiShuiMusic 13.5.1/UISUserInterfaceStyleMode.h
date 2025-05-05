@interface UISUserInterfaceStyleMode : NSObject
@property (nonatomic) q modeValue;
@property (nonatomic) q suggestedAutomaticModeValue;
@property (nonatomic) {?=qq} override;
@property (nonatomic) {?={?=qq}{?=qq}} customSchedule;
- (void)dealloc;
- (void)_setOverride:force:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (long long)modeValue;
- (void)setModeValue:;
- (id)_commonAnalyticsEventDictionary;
- (long long)suggestedAutomaticModeValue;
- (id)override;
- (id)customSchedule;
- (void).cxx_destruct;
- (void)setOverride:;
- (id)initWithDelegate:;
- (void)setCustomSchedule:;
@end
