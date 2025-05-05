@interface CNAutocompleteSuggestionsProbe : NSObject
@property (nonatomic) <SGSuggestionsServiceContactsProtocol> sgService;
@property (nonatomic) <CNScheduler> workScheduler;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSMutableArray pendingBlocks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)workScheduler;
- (void).cxx_destruct;
- (id)bundleID;
- (id)pendingBlocks;
- (id)sgService;
- (void)sendData;
- (void)recordUserSelectedAutocompleteResult:;
- (void)recordUserSawResultsConsideredSuggestion;
- (id)initWithSuggestionsService:schedulerProvider:bundleIdentifier:;
- (void)recordSGServiceMessage:;
+ (id)suggestionIdentifierForAutocompleteResult:;
+ (id)contactIdentifierForAutocompleteResult:;
+ (int)suggestionSourcesForAutocompleteResult:;
@end
