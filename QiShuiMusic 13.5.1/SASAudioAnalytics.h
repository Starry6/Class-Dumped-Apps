@interface SASAudioAnalytics : AceObject
@property (nonatomic) NSDictionary acousticFeatures;
@property (nonatomic) NSDictionary speechRecognitionFeatures;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_audioAnalytics;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)speechRecognitionFeatures;
- (id)acousticFeatures;
- (void)setAcousticFeatures:;
- (void)setSpeechRecognitionFeatures:;
+ (id)audioAnalytics;
+ (id)audioAnalyticsWithDictionary:context:;
@end
