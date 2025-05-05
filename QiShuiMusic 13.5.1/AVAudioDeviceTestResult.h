@interface AVAudioDeviceTestResult : NSObject
@property (nonatomic) q outputID;
@property (nonatomic) q inputID;
@property (nonatomic) double sampleRate;
@property (nonatomic) double correlationValue;
@property (nonatomic) NSData data;
- (id)data;
- (double)sampleRate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSampleRate:;
- (id)initWithData:inputID:outputID:sampleRate:correlationValue:;
- (long long)inputID;
- (void)setInputID:;
- (long long)outputID;
- (void)setOutputID:;
- (double)correlationValue;
- (void)setCorrelationValue:;
+ (BOOL)supportsSecureCoding;
@end
