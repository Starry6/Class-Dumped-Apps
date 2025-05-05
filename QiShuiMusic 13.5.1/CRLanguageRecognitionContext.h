@interface CRLanguageRecognitionContext : NSObject
@property (nonatomic) NSMutableArray featuresAccumulator;
@property (nonatomic) NSMutableString contextString;
@property (nonatomic) Q script;
@property (nonatomic) NSObject<OS_dispatch_semaphore> languageRecognitionSem;
@property (nonatomic) NSString recognizedLanguage;
- (void).cxx_destruct;
- (id)contextString;
- (unsigned long long)script;
- (void)setScript:;
- (id)recognizedLanguage;
- (id)initWithScript:;
- (void)setContextString:;
- (void)processFeature:recognizer:;
- (void)runRecognitionWithRecognizer:force:;
- (void)_updateFeatureLocale:;
- (id)featuresAccumulator;
- (void)setFeaturesAccumulator:;
- (id)languageRecognitionSem;
- (void)setLanguageRecognitionSem:;
@end
