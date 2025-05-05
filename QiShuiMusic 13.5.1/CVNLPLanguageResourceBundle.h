@interface CVNLPLanguageResourceBundle : NSObject
@property (nonatomic) CVNLPDecodingLexicons lexicons;
@property (nonatomic) CVNLPDecodingLanguageModel characterLanguageModel;
@property (nonatomic) CVNLPDecodingLanguageModel wordLanguageModel;
- (void).cxx_destruct;
- (id)initWithLexicons:characterLanguageModel:wordLanguageModel:;
- (id)packagedLexiconCursorsUsingContext:;
- (id)packagedLexiconRootCursors;
- (id)lexicons;
- (id)characterLanguageModel;
- (id)wordLanguageModel;
@end
