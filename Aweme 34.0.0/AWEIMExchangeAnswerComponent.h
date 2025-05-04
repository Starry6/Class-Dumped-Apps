@interface AWEIMExchangeAnswerComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageBaseViewController messageBaseViewController;
@property (nonatomic) <AWEIMMessageDataProtocol> messageDataController;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)messageDataControllerDidModified;
- (void)onExchangeAnswerUpdated;
- (void)componentDidMounted:;
- (id)messageDataController;
- (void)setMessageDataController:;
- (id)messageBaseViewController;
- (void)setMessageBaseViewController:;
- (void)updateExchangeIndexIfNeed;
- (void)updateExchangeAnswerEntranceIfNeed;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
