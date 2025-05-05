@interface CRLanguageResources : NSObject
@property (nonatomic) CVNLPLanguageResourceBundle _cvnlpLanguageResourceBundle;
@property (nonatomic) NSLocale locale;
@property (nonatomic) ^v lmCharacterLanguageModel;
@property (nonatomic) ^{CVNLPLanguageModel=} cvnlpCharacterLanguageModel;
@property (nonatomic) r^{_LXLexicon=} staticLexicon;
@property (nonatomic) ^v wordLanguageModel;
@property (nonatomic) ^v wordTokenizer;
- (void)dealloc;
- (id)locale;
- (void).cxx_destruct;
- (id)wordLanguageModel;
- (id)staticLexicon;
- (id)initWithLanguageIdentifier:type:;
- (id)cvnlpLanguageResourceBundle:lmConfig:;
- (id)lmCharacterLanguageModel;
- (id)cvnlpCharacterLanguageModel;
- (id)wordTokenizer;
- (id)_cvnlpLanguageResourceBundle;
- (void)set_cvnlpLanguageResourceBundle:;
+ (BOOL)isCustomWordsSupportedForLanguageIdentifier:;
+ (id)createCharacterModel:;
+ (id)createStaticLexicon:;
+ (id)createWordLanguageModel:type:;
+ (id)createCVNLPCharacterLanguageModel:;
+ (BOOL)isLanguageSupported:;
+ (BOOL)isCharLMForLanguageAvailableInTextRecognition:;
@end
