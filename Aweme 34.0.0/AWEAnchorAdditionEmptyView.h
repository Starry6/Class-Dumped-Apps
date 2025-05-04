@interface AWEAnchorAdditionEmptyView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) BOOL isSearchEmptyView;
- (void)setupEmptyViewUI;
- (void)setupEmptyViewTitle:subtitle:;
- (void)setIsSearchEmptyView:;
- (BOOL)isSearchEmptyView;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
@end
