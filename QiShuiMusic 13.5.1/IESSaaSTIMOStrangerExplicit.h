@interface IESSaaSTIMOStrangerExplicit : NSObject
@property (nonatomic) <IESSaaSTIMStrangerConversationFetcherProtocol> fetcher;
@property (nonatomic) <IESSaaSTIMOStrangerExplicitDelegate> delegate;
@property (nonatomic) Q unreadCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deleteAllConversationWithCompletion:;
- (void)fetchStrangerInboxWithCompletion:;
- (void)initWithInbox:;
- (void)strangerConversationDataSourceDidUpdate:updateConversationIdentifiers:reason:;
- (void)strangerConversationFetcher:didLoadFirstPageWithBatch:shouldClearUnreadCount:;
- (void)strangerConversationFetcher:didRefetchFirstPageWithBatch:;
- (void)strangerConversationFetcherDidUpdate:updateConversationIdentifiers:reason:;
- (unsigned long long)unreadCount;
- (id)init;
- (id)fetcher;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setFetcher:;
+ (id)sharedInstance;
@end
