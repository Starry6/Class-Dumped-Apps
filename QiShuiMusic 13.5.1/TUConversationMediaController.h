@interface TUConversationMediaController : NSObject
@property (nonatomic) <TUConversationManagerDataSource> dataSource;
@property (nonatomic) <TUConversationMediaControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateConversationWithUUID:participantPresentationContexts:;
- (void)mediaPrioritiesChangeForConversation:;
- (id)initWithConversationDataSource:;
@end
