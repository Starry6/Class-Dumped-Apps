@interface AWEIMMessageListGreetingStickerComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListSendMessageInterface> sendService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)willSendGreetingEmoticon:belongToMessage:param:sendContext:;
- (id)sendService;
- (id)emojiParamsfromBaseParams:additionalParams:con:;
- (void)setSendService:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
