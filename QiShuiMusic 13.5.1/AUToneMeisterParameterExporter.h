@interface AUToneMeisterParameterExporter : NSObject
@property (nonatomic) ^v toneMeister;
- (id)initWithToneMeister:;
- (id)exportWithOptions:;
- (id)exportParametersOfAllFilters:;
- (id)exportParametersOfFilter:;
- (id)exportTypeOfFilter:;
- (id)exportStateOfFilter:;
- (id)exportGainOfFilter:;
- (id)exportPhaseOfFilter:;
- (id)exportOrderOfFilter:;
- (id)exportQualtiyOfFilter:;
- (id)exportFrequencyOfFilter:;
- (id)exportChannelAllocationOfFilter:;
- (id)exportAutomationOfFilter:;
- (id)exportTimeStamp;
- (id)exportInputGain;
- (id)exportChannelMuteAndPhaseFlipParameters;
- (id)toneMeister;
- (void)setToneMeister:;
@end
