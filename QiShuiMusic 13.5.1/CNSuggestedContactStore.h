@interface CNSuggestedContactStore : CNContactStore
@property (nonatomic) <SGSuggestionsServiceContactsProtocol> suggestionService;
@property (nonatomic) <CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
- (id)unifiedContactsMatchingPredicate:keysToFetch:error:;
- (BOOL)executeSaveRequest:error:;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:error:usingBlock:;
- (id)requestAccessForEntityType:;
- (id)siriIntelligenceSettings;
- (void)setSiriIntelligenceSettings:;
- (id)init;
- (id)suggestionService;
- (void)setSuggestionService:;
- (id)initWithSuggestionsService:siriIntelligenceSettings:;
- (BOOL)shouldLogContactsAccess;
- (void).cxx_destruct;
- (id)originForSuggestion:error:;
- (BOOL)_processSuggestions:error:withBlock:;
+ (id)storeIdentifier;
+ (BOOL)isSuggestionsSupported;
+ (id)storeInfoClasses;
+ (id)os_log;
@end
