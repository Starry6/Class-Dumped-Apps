@interface IESIMMessageCache : NSObject
@property (nonatomic) NSCache messageCache;
- (id)messageCache;
- (void)setMessageCache:;
- (void).cxx_destruct;
+ (id)__getKeyWithMessageId:inConversation:;
+ (id)getMessageWithMessageId:inConversation:;
+ (void)removeMessageWithMessageId:inConversation:;
+ (void)setMessageWithMessageId:inConversation:message:;
+ (void)removeAllMessages;
+ (id)shareInstance;
@end
