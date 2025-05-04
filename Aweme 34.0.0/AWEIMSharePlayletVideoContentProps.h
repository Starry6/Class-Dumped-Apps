@interface AWEIMSharePlayletVideoContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString cid;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) AWEURLModel avatarUrlModel;
- (id)avatarUrlModel;
- (void)setAvatarUrlModel:;
- (id)cid;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)bgColor;
- (void)setBgColor:;
- (id)tapAction;
- (void)setTapAction:;
- (void)setCid:;
@end
