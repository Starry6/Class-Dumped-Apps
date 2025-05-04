@interface AWEIMLocalGuidanceEntranceCardMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) UIColor bGColor;
@property (nonatomic) BOOL needHidden;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSURL avatarURL;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setBGColor:;
- (BOOL)needHidden;
- (void)setNeedHidden:;
- (id)bGColor;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tapAction;
- (void)setTapAction:;
@end
