@interface AWEFlowChatListService : NSObject
- (void)conversationLastMessageChanged:;
- (void)conversationInfosChanged:;
- (id)sessionIDList;
- (void)stickOnTopStateDidChange:reason:;
- (BOOL)shouldStickOnTopByDefault;
- (void)flowAccessStateChanged:;
- (id)init;
- (void)dealloc;
- (id)businessID;
- (void).cxx_destruct;
@end
