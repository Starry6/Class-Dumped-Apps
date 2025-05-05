@interface SNSoundPrintASpeechModelOutput : NSObject
@property (nonatomic) MLMultiArray input_1;
@property (nonatomic) MLMultiArray Confidence;
@property (nonatomic) MLMultiArray Detected;
@property (nonatomic) MLMultiArray detectedHistoryOut;
@property (nonatomic) NSSet featureNames;
- (void)setConfidence:;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithInput_1:Confidence:Detected:detectedHistoryOut:;
- (id)input_1;
- (void)setInput_1:;
- (id)Confidence;
- (id)Detected;
- (void)setDetected:;
- (id)detectedHistoryOut;
- (void)setDetectedHistoryOut:;
@end
