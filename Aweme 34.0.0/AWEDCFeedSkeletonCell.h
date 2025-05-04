@interface AWEDCFeedSkeletonCell : AWEDCFeedBaseCell
@property (nonatomic) UIView coverImage;
@property (nonatomic) UIView titleLabel;
@property (nonatomic) UIView userInfo;
@property (nonatomic) AWEDCFeedConfig config;
- (void)awe_themeDidChange:;
- (void)setCoverImage:;
- (void)configCellWithConfig:;
- (void)setConfig:;
- (id)config;
- (id)initWithFrame:;
- (void)setUserInfo:;
- (id)userInfo;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)updateColor;
- (id)coverImage;
@end
