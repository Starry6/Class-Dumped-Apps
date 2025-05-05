@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult
@property (nonatomic) <WBSParsecSearchSession> parsecSearchSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString parsecDomainIdentifier;
@property (nonatomic) SFSearchResult sfSearchResultValue;
@property (nonatomic) Q engagementDestination;
@property (nonatomic) q parsecQueryID;
@property (nonatomic) NSString lastSearchQuery;
@property (nonatomic) WBSQuerySuggestion siriSuggestion;
@property (nonatomic) WBSParsecSearchMapsResultFeedbackSender mapsFeedbackSender;
- (id)initWithDictionary:;
- (id)parsecSearchSession;
- (void).cxx_destruct;
- (void)setParsecSearchSession:;
- (id)mapsFeedbackSender;
- (void)setMapsFeedbackSender:;
@end
