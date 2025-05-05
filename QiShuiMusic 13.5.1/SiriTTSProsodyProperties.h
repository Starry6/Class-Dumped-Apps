@interface SiriTTSProsodyProperties : NSObject
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentenceTilt;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (float)neuralSentencePitch;
- (void)setNeuralSentencePitch:;
- (float)neuralSentencePitchRange;
- (void)setNeuralSentencePitchRange:;
- (float)neuralSentenceDuration;
- (void)setNeuralSentenceDuration:;
- (float)neuralSentenceEnergy;
- (void)setNeuralSentenceEnergy:;
- (float)neuralSentenceTilt;
- (void)setNeuralSentenceTilt:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
