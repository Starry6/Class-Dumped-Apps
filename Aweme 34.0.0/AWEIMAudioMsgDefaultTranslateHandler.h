@interface AWEIMAudioMsgDefaultTranslateHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) Q onceRequestMaxCount;
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithComponentCenter:;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
- (void)refrshResourceStateFor:;
- (void)p_handleSendingMessage:;
- (unsigned long long)onceRequestMaxCount;
- (double)p_checkRequestDelayTimeWithMessages:;
- (void)recursiveRequestTranslateWithMessageGroups:inConversation:onceRequestMaxCount:;
- (void)recursivePreRequestTranslateWithMessageGroups:onceRequestMaxCount:;
- (void)setOnceRequestMaxCount:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (BOOL)enableAudioMessageAutoTranslate;
@end
