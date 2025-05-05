@interface CHContextualCharacterTransliteration : NSObject
@property (nonatomic) NSString confusion;
@property (nonatomic) NSString correction;
@property (nonatomic) NSArray locales;
@property (nonatomic) NSCharacterSet requiredLeftContext;
@property (nonatomic) NSCharacterSet requiredRightContext;
@property (nonatomic) BOOL requiresLexiconMatch;
- (void).cxx_destruct;
- (id)correction;
- (id)locales;
- (id)initWithConfusion:correction:locales:leftContext:rightContext:requiresLexiconMatch:;
- (BOOL)meetsContextRequirementWithLeftContext:rightContext:;
- (BOOL)isValidForLocale:;
- (id)confusion;
- (id)requiredLeftContext;
- (id)requiredRightContext;
- (BOOL)requiresLexiconMatch;
@end
