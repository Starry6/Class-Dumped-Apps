@interface AWEIMSendUserActionConversationModel : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) AWEUserModel fullDetailUser;
@property (nonatomic) q source;
- (id)routerParams;
- (void)setRouterParams:;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
- (id)conversation;
- (void)setConversation:;
@end
