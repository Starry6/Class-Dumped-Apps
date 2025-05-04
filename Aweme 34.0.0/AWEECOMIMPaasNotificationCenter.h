@interface AWEECOMIMPaasNotificationCenter : NSObject
@property (nonatomic) NSString customBizID;
- (id)customBizID;
- (void)setCustomBizID:;
- (id)generateNotificationKeyWithKey:;
- (id)initWithCustomBizID:;
- (void)sendNotificationForPigeonWebSocketStateChangedWithObject:userInfo:;
- (void)sendNotificationForWSMessageDidReceiveNotificationWithObject:userInfo:;
- (void)sendNotificationForNotifyLongConnectionReceiveMessageWithObject:userInfo:;
- (void)sendNotificationForNotifyIMMessageDidReceiveResponseWithObject:userInfo:;
- (void)sendNotificationForNotifyReadMessageChangeWithObject:userInfo:;
- (void)sendNotificationForNotifyPigeonMessageDidInsertWithObject:userInfo:;
- (void)sendNotificationForNotifyPigeonMessageUpdateWithObject:userInfo:;
- (void)sendNotificationForNotifyNewP2PMessageWithObject:userInfo:;
- (void)sendNotificationForNotifyPigeonConversationUpdateWithObject:userInfo:;
- (void)sendNotificationForNotifyPigeonConversationListChangeWithObject:userInfo:;
- (void).cxx_destruct;
@end
