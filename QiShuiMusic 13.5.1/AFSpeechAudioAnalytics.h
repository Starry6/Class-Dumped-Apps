@interface AFSpeechAudioAnalytics : NSObject
@property (nonatomic) NSDictionary speechRecognitionFeatures;
@property (nonatomic) NSDictionary acousticFeatures;
@property (nonatomic) double snr;
- (double)snr;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithSpeechRecognitionFeatures:acousticFeatures:;
- (id)initWithSpeechRecognitionFeatures:acousticFeatures:snr:;
- (id)speechRecognitionFeatures;
- (id)acousticFeatures;
+ (BOOL)supportsSecureCoding;
@end
