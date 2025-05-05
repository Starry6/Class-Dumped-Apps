@interface TISmartPunctuationController : NSObject
@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) Q autoQuoteType;
@property (nonatomic) TISmartPunctuationOptions smartPunctuationOptions;
- (void)setSmartDashesEnabled:;
- (void)setSmartPunctuationOptions:;
- (id)init;
- (id)smartPunctuationOptions;
- (BOOL)smartDashesEnabled;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (unsigned long long)autoQuoteType;
- (void)setAutoQuoteType:;
- (id)_checkInput:forContextualChinesePunctuationInDocumentState:;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)setSmartQuotesEnabled:;
- (BOOL)smartQuotesEnabled;
- (id)_checkInput:forContextualEllipsesInDocumentState:;
- (void).cxx_destruct;
- (id)smartPunctuationedStringForString:;
- (void)reset;
- (id)smartPunctuationOutputForInput:isLockedInput:documentState:;
- (id)_checkInput:forContextualQuotesInDocumentState:;
- (id)_checkInput:forContextualDashesInDocumentState:;
- (id)_alternatingStringForInputString:isLockedInput:hasMarkedText:;
- (id)smartPunctuationResultsForString:;
+ (id)_chineseContextualVariantMapping;
@end
