@interface EMFQueryResult : NSObject
@property (nonatomic) EMFQuery query;
@property (nonatomic) NSArray documentMatches;
@property (nonatomic) NSDictionary matchingDocumentWeights;
@property (nonatomic) EMFQueryResultOverride resultOverride;
- (id)query;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQuery:andMatchingDocumentWeights:;
- (id)initWithQuery:matchingDocumentWeights:resultOverride:;
- (id)documentMatches;
- (id)emojiStringMatchesUsingEmojiLocaleData:;
- (id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:;
- (id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:;
- (BOOL)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
- (id)_handleOverrideResultInterpolationForStandardResults:;
- (id)_interpolateOverriddenResultsByPrepending:;
- (id)_interpolateOverriddenResultsByAppending:;
- (id)_interpolateOverriddenResultsByAppendingAndMoving:;
- (id)_interpolateOverriddenResultsByFiltering:;
- (id)_interpolateOverriddenResultsByOverwriting;
- (id)resultOverride;
- (id)matchingDocumentWeights;
+ (id)_emojiTokenForDocumentID:usingLocaleData:;
+ (id)_emojiStringForDocumentID:usingLocaleData:;
@end
