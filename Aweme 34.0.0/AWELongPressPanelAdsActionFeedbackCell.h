@interface AWELongPressPanelAdsActionFeedbackCell : UICollectionViewCell
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEAdAttitudeFilterWordModel model;
@property (nonatomic) BOOL isPopoverCell;
- (void)configNormalStyle;
- (void)configSelectedStyle;
- (void)updatePopoverborder;
- (BOOL)isPopoverCell;
- (void)setIsPopoverCell:;
- (void)setModel:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:;
- (void)setupViews;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
