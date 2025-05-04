@interface AWESearchMenuFilterSettingView : UIView
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIButton resetButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) <AWESearchMenuFilterSettingViewProtocol> delegate;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configUI;
- (void)resetButtonClicked;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)resetButton;
- (void)setResetButton:;
- (void)confirmButtonClicked;
@end
