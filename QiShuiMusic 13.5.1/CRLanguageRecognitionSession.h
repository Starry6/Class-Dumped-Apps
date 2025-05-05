@interface CRLanguageRecognitionSession : NSObject
@property (nonatomic) CRLanguageRecognitionContext latinLanguageRecognitionContext;
@property (nonatomic) NLLanguageRecognizer languageRecognizer;
- (id)init;
- (void).cxx_destruct;
- (void)completeSession;
- (void)processFeature:context:;
- (id)latinLanguageRecognitionContext;
- (void)setLatinLanguageRecognitionContext:;
- (id)languageRecognizer;
- (void)setLanguageRecognizer:;
@end
