@interface TUSearchController : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSMutableDictionary searchModules;
@property (nonatomic) NSMutableArray recentsModules;
@property (nonatomic) NSObject<OS_dispatch_queue> searchQueue;
- (void)setContactStore:;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (void)searchForString:completion:;
- (void)recentsWithCompletion:;
- (void)_cancelRecentSearches;
- (void)_cancelSearchsForSearchTerm:;
- (void)_fetchIdsDestinationsIfNeeded:withReason:;
- (void)_clearIdsDestinations;
- (id)recentsModuleCompletionWithCompletion:;
- (id)searchModuleCompletionWithSearchTerm:completion:;
- (id)_searchModuleCompletionWithModules:searchTerm:resultsClass:completion:;
- (id)searchModules;
- (void)setSearchModules:;
- (id)recentsModules;
- (void)setRecentsModules:;
- (id)searchQueue;
- (void)setSearchQueue:;
+ (id)sharedInstance;
@end
