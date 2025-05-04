@interface AWEIMChatCellNameComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMChatModel kvoChat;
- (void)updateComponentWhenChatUpdate:;
- (void)p_updatePresenter:;
- (id)kvoChat;
- (void)setKvoChat:;
- (void)updateFormatUserNameIfNeed:defaultName:;
- (void).cxx_destruct;
+ (id)nameAttributes;
@end
