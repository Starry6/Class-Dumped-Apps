@interface AWEOfflineVideoDownloadingGroupMarkView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q badgeCount;
@property (nonatomic) BOOL isPauseStyle;
- (BOOL)isPauseStyle;
- (void)buttonClickAction;
- (void)setIsPauseStyle:;
- (id)init;
- (id)icon;
- (long long)badgeCount;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setBadgeCount:;
- (void)setupView;
@end
