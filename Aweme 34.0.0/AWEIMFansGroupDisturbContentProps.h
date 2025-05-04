@interface AWEIMFansGroupDisturbContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSAttributedString titleAttributedString;
@property (nonatomic) NSAttributedString contentAttributedString;
@property (nonatomic) NSAttributedString disturbAttributedString;
@property (nonatomic) @? closeButtonTapAction;
@property (nonatomic) @? disturbSwitchChangeAction;
@property (nonatomic) BOOL hideTitleIcon;
@property (nonatomic) BOOL isDisturbSwitchOn;
- (void)setCloseButtonTapAction:;
- (id)closeButtonTapAction;
- (id)disturbAttributedString;
- (void)setDisturbAttributedString:;
- (void)setHideTitleIcon:;
- (void)setIsDisturbSwitchOn:;
- (void)setDisturbSwitchChangeAction:;
- (id)disturbSwitchChangeAction;
- (BOOL)hideTitleIcon;
- (BOOL)isDisturbSwitchOn;
- (void).cxx_destruct;
- (id)contentAttributedString;
- (id)titleAttributedString;
- (void)setTitleAttributedString:;
- (void)setContentAttributedString:;
@end
