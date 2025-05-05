@interface WBSPasswordGenerationManager : NSObject
@property (nonatomic) NSDictionary passwordRequirementsByDomain;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)passwordGenerationIsDisallowedByRequirements:;
- (id)initWithPasswordRequirementsByDomain:;
- (id)generated15CharacterAlphanumericPassword;
- (BOOL)manualPasswordGenerationIsDisallowedByRequirements:;
- (id)defaultRequirementsForURL:;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:;
- (id)updatedRequirements:respectingMaxLength:;
- (id)generatedPasswordMatchingRequirements:;
- (id)_moreTypeablePassword;
- (void)_lexiconEnumerateEntries:forString:completionHandler:;
- (BOOL)_tokensContainUnwantedWords:;
- (id)defaultRequirementsForDomain:;
- (id)passwordRequirementsByDomain;
- (void)setPasswordRequirementsByDomain:;
+ (unsigned long long)minimumPasswordLength;
+ (id)requirementsForPasswordRuleSet:respectingMinLength:maxLength:;
+ (BOOL)passwordLooksLikePasswordManagerGeneratedPassword:;
+ (BOOL)passwordLooksLikePasswordManagerGeneratedMoreTypablePassword:;
@end
