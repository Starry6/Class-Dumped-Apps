@interface AWESearchSubcribeAlertButtonContainer : UIView
@property (nonatomic) UIView topLine;
@property (nonatomic) UIView middleLine;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
- (id)middleLine;
- (id)createLine;
- (id)createButtonWithFont:titleColor:;
- (void)setMiddleLine:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)leftButton;
- (id)initWithFrame:;
- (id)rightButton;
- (void).cxx_destruct;
- (id)topLine;
- (void)setTopLine:;
@end
