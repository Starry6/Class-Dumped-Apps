@interface CPLDerivativesFilter : NSObject
@property (nonatomic) NSArray plistDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)redactedDescription;
- (BOOL)shouldDropDerivativeWithDropDerivativeRecipe:;
- (BOOL)_isValidDropDerivativeRecipeWithUTI:sourceType:derivativeTypes:changeType:;
- (id)initWithCoder:;
- (BOOL)addServerDropDerivativesRecipes:;
- (BOOL)mightDropSomeDerivativesForSourceType:forChangeType:;
- (BOOL)addServerDropDerivativesRecipe:;
- (id)plistDescription;
- (void)encodeWithCoder:;
- (void)enumerateDropDerivativeRulesWithBlock:;
- (void).cxx_destruct;
- (id)_descriptionForStoredResponse:recordType:;
- (void)reset;
- (id)description;
- (void)_enumerateDropDerivativeRules:ofType:withBlock:;
- (BOOL)isEqual:;
- (id)_getTargetDictionaryForChangeType:;
+ (BOOL)supportsSecureCoding;
@end
