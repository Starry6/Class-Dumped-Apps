@interface AWEIMMessageAccountCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAvatarViewBlock;
@property (nonatomic) NSURL avatarURL;
@property (nonatomic) NSString nickname;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (nonatomic) AWEIMMessage message;
- (void)setHasBackground:;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setBackgroundImageIsBright:;
- (BOOL)backgroundImageIsBright;
- (void)setTapAvatarViewBlock:;
- (id)tapAvatarViewBlock;
- (id)nickname;
- (id)message;
- (BOOL)hasBackground;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setNickname:;
@end
