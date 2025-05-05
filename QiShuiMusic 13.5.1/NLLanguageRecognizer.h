@interface NLLanguageRecognizer : NSObject
@property (nonatomic) NSString dominantLanguage;
@property (nonatomic) NSDictionary languageHints;
@property (nonatomic) NSArray languageConstraints;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)dominantLanguage;
- (void)processString:;
- (id)languageHypothesesWithMaximum:;
- (void)processString:range:;
- (id)languageHints;
- (void)setLanguageHints:;
- (id)languageConstraints;
- (void)setLanguageConstraints:;
+ (id)dominantLanguageForString:;
@end
