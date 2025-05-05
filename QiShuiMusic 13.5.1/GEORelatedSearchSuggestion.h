@interface GEORelatedSearchSuggestion : NSObject
@property (nonatomic) GEOPDRelatedSearchSuggestion relatedSearchSuggestion;
@property (nonatomic) NSString displayString;
@property (nonatomic) NSString searchBarDisplayToken;
- (id)displayString;
- (id)_suggestionEntryMetadata;
- (void).cxx_destruct;
- (id)relatedSearchSuggestion;
- (void)setRelatedSearchSuggestion:;
- (id)initWithPDRelatedSearchSuggestion:;
- (id)searchBarDisplayToken;
@end
