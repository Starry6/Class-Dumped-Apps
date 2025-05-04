@interface AWEProfilePostUnreadNoticeBottomView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXPluralAvatar pluralAvatar;
@property (nonatomic) NSMutableDictionary avatars;
@property (nonatomic) AWEUserWorkCellContext cellContext;
@property (nonatomic) AWEProfilePostUnreadNoticeModel noticeModel;
- (void)awe_themeDidChange:;
- (id)noticeModel;
- (void)setNoticeModel:;
- (void)setAvatars:;
- (void)setPluralAvatar:;
- (id)pluralAvatar;
- (void)updateNoticeInfo;
- (long long)avatarsCount:;
- (id)avatarWithIndex:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setCellContext:;
- (id)cellContext;
- (id)avatars;
@end
