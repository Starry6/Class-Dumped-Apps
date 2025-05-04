@interface AWEIMChatCellStreakRemindHintDataObserverComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatListHintProviderCellInterface> hintComponentInterface;
@property (nonatomic) AWEBinding sharedExtBinding;
- (void)afterInitialComponentAllResolved:;
- (void)updateComponentWhenChatUpdate:;
- (id)sharedExtBinding;
- (void)setSharedExtBinding:;
- (void)setHintComponentInterface:;
- (id)hintComponentInterface;
- (void)p_addKVOIfNeeded:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
