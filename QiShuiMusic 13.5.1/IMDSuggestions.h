@interface IMDSuggestions : NSObject
@property (nonatomic) <NSObject><SGSuggestionsServiceMessagesProtocol> sgService;
- (id)init;
- (void).cxx_destruct;
- (void)suggestionsFromMessage:options:completionHandler:;
- (id)suggestionsService:needsContextForConversationIdentifier:numberOfMessagesNeeded:;
- (id)sgService;
- (void)setSgService:;
@end
