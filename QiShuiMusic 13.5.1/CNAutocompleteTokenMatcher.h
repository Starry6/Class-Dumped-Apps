@interface CNAutocompleteTokenMatcher : NSObject
+ (BOOL)doSearchTokens:matchNameTokens:;
+ (id)indexesOfNameTokens:matchingSearchToken:;
+ (id)tokensForNameString:;
@end
