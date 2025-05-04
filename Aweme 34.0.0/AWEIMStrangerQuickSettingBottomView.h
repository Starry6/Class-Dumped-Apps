@interface AWEIMStrangerQuickSettingBottomView : UIView
@property (nonatomic) UIButton<IESIMRichButtonProtocol> settingButton;
@property (nonatomic) UIButton<IESIMRichButtonProtocol> clearButton;
@property (nonatomic) @? clickSettingButtonBlock;
@property (nonatomic) @? clickClearButtonBlock;
- (void)setSettingButton:;
- (id)settingButton;
- (void)didClickSettingButton:;
- (void)didClickClearButton:;
- (id)clickSettingButtonBlock;
- (id)clickClearButtonBlock;
- (void)clearStatusIsRuning:;
- (void)setClickSettingButtonBlock:;
- (void)setClickClearButtonBlock:;
- (id)init;
- (void).cxx_destruct;
- (id)clearButton;
- (void)setupUI;
- (void)setClearButton:;
- (void)layoutUI;
@end
