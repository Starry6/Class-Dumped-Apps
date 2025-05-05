@interface CNAutocompleteResultTokenMatcher : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchString:;
- (id)initWithSearchString:countryCode:;
- (id)filterAdapter;
- (BOOL)evaluateResult:;
- (BOOL)evaluateSingleResult:;
- (BOOL)evaluateTopLevelGroupResult:;
- (id)nameTokensForResult:;
- (id)tokensForResultName:;
- (id)tokensForResultValue:;
- (id)representationsOfPhoneNumber:;
+ (id)searchTokensFromString:;
+ (id)indexTokensFromPhoneNumber:;
+ (id)tokenizePhoneNumber:;
+ (id)normalizePhoneNumber:countryCode:;
@end
