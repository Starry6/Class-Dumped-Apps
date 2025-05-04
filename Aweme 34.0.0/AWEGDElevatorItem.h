@interface AWEGDElevatorItem : UIControl
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString key;
- (double)elevatorFontSize;
- (void)updateTitleLabelColor;
- (void)updateWithKey:title:;
- (void)setKey:;
- (id)initWithFrame:;
- (id)key;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:;
- (void)setupUI;
- (void)updateTitleFont;
@end
