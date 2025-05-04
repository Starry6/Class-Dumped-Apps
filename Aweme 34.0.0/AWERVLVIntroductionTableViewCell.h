@interface AWERVLVIntroductionTableViewCell : UITableViewCell
@property (nonatomic) UILabel introductionLabel;
@property (nonatomic) UILabel detailLabel;
- (id)introductionLabel;
- (void)setIntroductionLabel:;
- (void)updateTopPadding:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (void)updateWithModel:;
@end
