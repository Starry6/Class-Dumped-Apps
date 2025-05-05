@interface AutoClickControlViewController : UIViewController
@property (nonatomic) UISwitch autoClickSwitch;
@property (nonatomic) UIButton setButtonTitlesButton;
@property (nonatomic) NSMutableArray buttonTitles;
@property (nonatomic) BOOL isAutoClickControlViewControllerPresented;
- (void)viewDidLoad;
- (void)setButtonDesign:;
- (void)toggleAutoClick:;
- (void)stopAutoClick;
- (void)enterButtonTitles;
- (void)clearButtonTitles;
- (id)getButtonTitlesText;
- (void)updateButtonTitlesLabel;
- (void)closeView;
- (id)autoClickSwitch;
- (void)setAutoClickSwitch:;
- (id)setButtonTitlesButton;
- (void)setSetButtonTitlesButton:;
- (id)buttonTitles;
- (void)setButtonTitles:;
- (BOOL)isAutoClickControlViewControllerPresented;
- (void)setIsAutoClickControlViewControllerPresented:;
- (void).cxx_destruct;
@end
