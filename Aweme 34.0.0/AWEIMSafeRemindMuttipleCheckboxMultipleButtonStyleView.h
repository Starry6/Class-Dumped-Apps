@interface AWEIMSafeRemindMuttipleCheckboxMultipleButtonStyleView : AWEIMSafeRemindView
@property (nonatomic) UIStackView checkboxStackView;
@property (nonatomic) NSMutableArray selectViewArray;
@property (nonatomic) UIButton highlightButton;
@property (nonatomic) AWEIMSecurityToastConfigButtonModel highlightButtonModel;
- (id)colorInLightTheme:;
- (id)checkboxStackView;
- (double)__checkboxHeight;
- (void)onTapGes:;
- (void)setSelectViewArray:;
- (double)__contentBottom;
- (void)__updateHighlightButtonState;
- (id)selectViewArray;
- (id)highlightButtonModel;
- (void)setHighlightButtonModel:;
- (void)setCheckboxStackView:;
- (BOOL)checkValid;
- (id)p_createButtonWithButtonModel:configModel:;
- (void)configBottomView:configModel:;
- (void)configCheckboxesWithModel:;
- (void)configButtons:withModel:;
- (void)setupHighlightButtonWithEnableState:;
- (void).cxx_destruct;
- (id)highlightButton;
- (void)setHighlightButton:;
- (BOOL)hasCheckbox;
@end
