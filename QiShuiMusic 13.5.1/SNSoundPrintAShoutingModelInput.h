@interface SNSoundPrintAShoutingModelInput : NSObject
@property (nonatomic) MLMultiArray input1;
@property (nonatomic) MLMultiArray stateIn;
@property (nonatomic) MLMultiArray detectedHistoryIn;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithInput1:;
- (id)initWithInput1:stateIn:detectedHistoryIn:;
- (id)input1;
- (void)setInput1:;
- (id)stateIn;
- (void)setStateIn:;
- (id)detectedHistoryIn;
- (void)setDetectedHistoryIn:;
@end
