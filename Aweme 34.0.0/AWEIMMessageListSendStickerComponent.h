@interface AWEIMMessageListSendStickerComponent : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary providerMap;
@property (nonatomic) NSDictionary taskInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)sendEmoticon:belongToTheme:statsContext:;
- (id)createContextWithEmoticon:belongToTheme:;
- (void)sendEmoticonWithContext:;
- (id)providerMap;
- (void)p_sendEmoticon:belongToTheme:statsContext:;
- (BOOL)p_trySendLightInteractionWithContext:;
- (void)p_trackGeneralEmojiClickWithContext:;
- (void)setProviderMap:;
- (void).cxx_destruct;
- (id)taskInfo;
- (void)setTaskInfo:;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
