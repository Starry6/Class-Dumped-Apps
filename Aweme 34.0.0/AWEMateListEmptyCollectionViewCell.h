@interface AWEMateListEmptyCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIStackView labelStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXVacantView emptyView;
- (void)updateEmptyStyle:labelTitle:subtitle:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)labelStackView;
- (void)setLabelStackView:;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:;
@end
