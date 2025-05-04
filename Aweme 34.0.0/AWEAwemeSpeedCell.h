@interface AWEAwemeSpeedCell : UICollectionViewCell
@property (nonatomic) UILabel speedTitleLabel;
@property (nonatomic) AWEAwemeLongPressFunctionModel model;
@property (nonatomic) BOOL selectedSpeed;
- (void)setSelectedSpeed:;
- (id)speedTitleLabel;
- (void)setSpeedTitleLabel:;
- (void)setModel:;
- (BOOL)selectedSpeed;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createUI;
@end
