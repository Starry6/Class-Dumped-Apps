@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel
@property (nonatomic) NSString label;
@property (nonatomic) NSURL url;
@property (nonatomic) WBSParsecImageRepresentation imageRepresentation;
@property (nonatomic) NSString parsecDomainIdentifier;
@property (nonatomic) SFSearchResult sfSearchResultValue;
@property (nonatomic) Q engagementDestination;
@property (nonatomic) q parsecQueryID;
@property (nonatomic) NSString lastSearchQuery;
@property (nonatomic) WBSQuerySuggestion siriSuggestion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)initWithDictionary:;
- (id)label;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (long long)parsecQueryID;
- (void)setParsecQueryID:;
- (id)parsecDomainIdentifier;
- (id)sfSearchResultValue;
- (unsigned long long)engagementDestination;
+ (id)schema;
@end
