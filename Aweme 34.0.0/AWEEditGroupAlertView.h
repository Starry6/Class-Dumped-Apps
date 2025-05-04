@interface AWEEditGroupAlertView : AWETextEditAlertView
@property (nonatomic) UIButton clearButton;
@property (nonatomic) BOOL isAnimating;
- (void)showOnView:;
- (void)clickConfirmBtn;
- (void)editGroupWithOldName:;
- (id)initWithFrame:;
- (BOOL)isAnimating;
- (void)setIsAnimating:;
- (void)layoutSubviews;
- (void)textFieldDidChange:;
@end
