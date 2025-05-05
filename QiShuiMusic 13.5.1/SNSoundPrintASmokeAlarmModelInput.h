@interface SNSoundPrintASmokeAlarmModelInput : NSObject
@property (nonatomic) MLMultiArray input1;
@property (nonatomic) MLMultiArray stateIn;
@property (nonatomic) MLMultiArray thresholdedHistoryIn;
@property (nonatomic) MLMultiArray detectedHistoryIn;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithInput1:;
- (id)input1;
- (void)setInput1:;
- (id)stateIn;
- (void)setStateIn:;
- (id)detectedHistoryIn;
- (void)setDetectedHistoryIn:;
- (id)initWithInput1:stateIn:thresholdedHistoryIn:detectedHistoryIn:;
- (id)thresholdedHistoryIn;
- (void)setThresholdedHistoryIn:;
@end
