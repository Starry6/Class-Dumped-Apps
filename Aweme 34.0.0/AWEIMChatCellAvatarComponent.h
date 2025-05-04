@interface AWEIMChatCellAvatarComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMChatModel kvoChat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)p_updatePresenter:;
- (id)kvoChat;
- (void)setKvoChat:;
- (void)prefetchChatAvatar;
- (void).cxx_destruct;
@end
