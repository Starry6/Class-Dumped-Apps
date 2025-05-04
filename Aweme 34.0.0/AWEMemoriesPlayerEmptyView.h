@interface AWEMemoriesPlayerEmptyView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? shootAction;
- (id)shootAction;
- (void)setShootAction:;
- (void)showOnView:contentString:;
- (void)cameraButtonClick:;
- (id)textLabel;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
