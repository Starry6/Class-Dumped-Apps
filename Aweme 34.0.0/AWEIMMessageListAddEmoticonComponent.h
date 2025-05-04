@interface AWEIMMessageListAddEmoticonComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessage targetMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)recallMessage:toMessage:;
- (void)willDeleteMessage:;
- (id)targetMsg;
- (void)setTargetMsg:;
- (void)p_updateWithMessage:reason:;
- (void)p_findLatestGiphyGlobalIndexWithLimit:groups:skipMsg:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
