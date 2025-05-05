@interface TUConversationProviderManager : NSObject
@property (nonatomic) <TUConversationProviderManagerDataSource> dataSource;
- (void)registerForCallbacksForProvider:completionHandler:;
- (id)init;
- (void)dealloc;
- (void)doesHandle:correspondToConversationProvider:completionHandler:;
- (id)initWithDataSource:;
- (void)generatePseudonymHandleForConversationProvider:expiryDuration:URI:completionHandler:;
- (void)revokePseudonymHandle:forConversationProvider:completionHandler:;
- (void)renewPseudonymHandle:forConversationProvider:expirationDate:completionHandler:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)conversationProviderForIdentifier:completionHandler:;
- (void)registerConversationProviderForConfiguration:completionHandler:;
@end
