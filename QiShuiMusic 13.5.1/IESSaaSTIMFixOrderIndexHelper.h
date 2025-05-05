@interface IESSaaSTIMFixOrderIndexHelper : NSObject
+ (void)addOrderIndexToLocalExt:msgID:inConversation:;
+ (void)checkNewSendMsgNeedFixWithOrderIndex:msgID:inConversation:;
+ (void)clearOrderIndexInConversation:;
+ (void)handleOnHistorySceneFix:;
+ (void)onInsertNewMessages:reason:;
@end
