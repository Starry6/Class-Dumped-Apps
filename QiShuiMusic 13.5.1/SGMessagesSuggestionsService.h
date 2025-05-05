@interface SGMessagesSuggestionsService : SGSuggestionsService
@property (nonatomic) SGMessagesDaemonConnection messagesDaemonConnection;
@property (nonatomic) NSMutableDictionary previousMessages;
@property (nonatomic) <SGMessagesSuggestionsServiceDelegate> delegate;
- (id)init;
- (void)harvestedSuggestionsFromMessage:bundleIdentifier:options:completionHandler:;
- (void)setMessagesDaemonConnection:;
- (void)setManagerForTesting:;
- (void)setDelegate:;
- (void)harvestedSuggestionsFromMessages:options:completionHandler:;
- (void)harvestedSuggestionsFromMessage:bundleIdentifier:options:withCompletion:;
- (BOOL)isMessageEligibleForSuggestions:;
- (void)setupContextIfNeededForConversation:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPreviousMessages:;
- (void)suggestionsFromMessage:options:completionHandler:;
- (id)messagesDaemonConnection;
- (void)sendContextForMessage:;
- (id)previousMessages;
@end
