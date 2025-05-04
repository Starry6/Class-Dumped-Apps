@interface AWEIMReplyShareLiveMediaProps : AWEIMUIViewPresenterProps
@property (nonatomic) BOOL isLiving;
@property (nonatomic) NSAttributedString nickName;
@property (nonatomic) NSAttributedString liveStatusString;
@property (nonatomic) UIImage liveStatusImage;
@property (nonatomic) @? tapAction;
@property (nonatomic) NSArray coverUrlArray;
@property (nonatomic) NSArray avatarUrlArray;
- (BOOL)isLiving;
- (void)setIsLiving:;
- (void)setAvatarUrlArray:;
- (void)setCoverUrlArray:;
- (void)setLiveStatusImage:;
- (void)setLiveStatusString:;
- (id)avatarUrlArray;
- (id)coverUrlArray;
- (id)liveStatusImage;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (id)liveStatusString;
- (id)tapAction;
- (void)setTapAction:;
@end
