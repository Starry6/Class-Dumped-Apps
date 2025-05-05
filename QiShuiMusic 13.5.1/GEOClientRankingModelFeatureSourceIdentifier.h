@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier
@property (nonatomic) q sourceType;
@property (nonatomic) NSInteger suggestionType;
@property (nonatomic) NSInteger serverEntryType;
- (id)init;
- (long long)sourceType;
- (int)suggestionType;
- (int)serverEntryType;
- (long long)featureIdentifierType;
- (id)initWithSuggestionType:serverEntryType:sourceType:;
@end
