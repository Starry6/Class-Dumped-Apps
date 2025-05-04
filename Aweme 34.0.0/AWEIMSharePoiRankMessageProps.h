@interface AWEIMSharePoiRankMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL sendFromMe;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage avatarDefaultImage;
@property (nonatomic) NSString avatarURL;
- (id)avatarURL;
- (void)setAvatarURL:;
- (BOOL)sendFromMe;
- (void)setSendFromMe:;
- (void)setAvatarDefaultImage:;
- (id)avatarDefaultImage;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tapAction;
- (void)setTapAction:;
@end
