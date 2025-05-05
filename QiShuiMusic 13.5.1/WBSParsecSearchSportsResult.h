@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult
@property (nonatomic) NSArray images;
@property (nonatomic) NSArray individualScores;
@property (nonatomic) NSString subtitle;
@property (nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem extraCompletionItem;
- (id)initWithDictionary:;
- (id)images;
- (void).cxx_destruct;
- (id)subtitle;
- (id)individualScores;
- (id)extraCompletionItem;
+ (id)_specializedSchema;
@end
