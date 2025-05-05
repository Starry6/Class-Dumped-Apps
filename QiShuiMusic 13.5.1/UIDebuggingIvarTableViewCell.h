@interface UIDebuggingIvarTableViewCell : UITableViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel typeLabel;
@property (nonatomic) UILabel valueLabel;
@property (nonatomic) UIDebuggingIvar ivar;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (void)setIvar:;
- (id)ivar;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)valueLabel;
- (void)_prepareConstraints;
- (void)setNameLabel:;
- (id)typeLabel;
- (void)setTypeLabel:;
- (void)setValueLabel:;
@end
