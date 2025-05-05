@interface GEODisplayHeaderSubstitute : NSObject
@property (nonatomic) GEOPDDisplayHeaderSubstitute displayHeaderSubstitute;
@property (nonatomic) GEORelatedSearchSuggestion relatedSearchSuggestion;
@property (nonatomic) NSInteger substituteType;
@property (nonatomic) NSString interpretedQuery;
- (void).cxx_destruct;
- (id)initWithPDDisplayHeaderSubstitute:;
- (int)substituteType;
- (id)interpretedQuery;
- (id)displayHeaderSubstitute;
- (void)setDisplayHeaderSubstitute:;
- (id)relatedSearchSuggestion;
- (void)setRelatedSearchSuggestion:;
@end
