@interface IESLiveMessageListActionApi : HTSLiveApi
- (void)getMessageOperateStatusWithMsgID:completion:;
- (void)updateMessageOperateStatusWithMsgID:actionType:completion:;
@end
