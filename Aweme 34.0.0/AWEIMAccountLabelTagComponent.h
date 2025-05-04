@interface AWEIMAccountLabelTagComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMChatModel kvoChat;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)noti_themeDidChange;
- (void)p_setOfficialAccountLabelColor:;
- (void)p_setSilverWingChatLabelColor;
- (void)p_setOfficialAccountLabelText:;
- (void)p_addKVOWithChatModel:;
- (id)kvoChat;
- (void)setKvoChat:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
