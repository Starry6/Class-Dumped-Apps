@interface AWEIMChatDetailEmptyView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
- (void)initSubviews;
- (void)addSubviews;
- (void)setupWithTitle:content:;
- (void)updateIconView:size:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setDetailLabel:;
- (void)setupLayout;
@end
