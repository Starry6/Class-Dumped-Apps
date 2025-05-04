@interface AWEAnchorMediumTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton addButton;
@property (nonatomic) AWEAnchorMediumModel mediumModel;
@property (nonatomic) @? addMediumBlock;
- (void)updateUIWithAnchorMediumModel:;
- (void)setAddMediumBlock:;
- (void)addGameAnchorTapped:;
- (void)setMediumModel:;
- (id)mediumModel;
- (id)addMediumBlock;
- (void)setSubtitleLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setIconImageView:;
- (void)setupSubviews;
- (id)addButton;
- (void)setAddButton:;
+ (id)cellIdentifier;
@end
