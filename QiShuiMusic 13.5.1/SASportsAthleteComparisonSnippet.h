@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet
@property (nonatomic) NSDictionary comparisonItemDetails;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)comparisonItemDetails;
- (void)setComparisonItemDetails:;
+ (id)athleteComparisonSnippet;
+ (id)athleteComparisonSnippetWithDictionary:context:;
@end
