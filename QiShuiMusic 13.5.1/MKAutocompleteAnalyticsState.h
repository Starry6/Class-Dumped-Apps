@interface MKAutocompleteAnalyticsState : NSObject
@property (nonatomic) NSString query;
@property (nonatomic) NSArray queryTokens;
@property (nonatomic) NSArray suggestionEntries;
- (id)query;
- (void).cxx_destruct;
- (id)queryTokens;
- (id)initWithQuery:queryTokens:suggestionEntries:;
- (id)suggestionEntries;
@end
