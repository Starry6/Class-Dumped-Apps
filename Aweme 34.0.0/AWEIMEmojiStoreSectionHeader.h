@interface AWEIMEmojiStoreSectionHeader : UITableViewHeaderFooterView
@property (nonatomic) MASConstraint topConstraint;
@property (nonatomic) double topOffset;
@property (nonatomic) UILabel titleLabel;
- (void)setTopOffset:;
- (double)topOffset;
- (void)setTopConstraint:;
- (id)topConstraint;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
@end
