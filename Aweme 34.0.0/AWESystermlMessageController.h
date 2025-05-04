@interface AWESystermlMessageController : NSObject
+ (void)sendSendNoticeToConversation:fullText:highLightText:link:aweType:;
+ (id)msgIdForSendSystemNoticeToConversation:fullText:aweType:;
+ (void)sendSendNoticeToConversation:fullText:highLightText:link:;
+ (id)richTextNoticeMessageWithFullText:highLightText:link:aweType:;
@end
