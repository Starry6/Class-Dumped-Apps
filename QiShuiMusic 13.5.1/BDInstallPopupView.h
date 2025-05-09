@interface BDInstallPopupView : UIView
@property (nonatomic) @? confirmHandler;
@property (nonatomic) @? cancelHandler;
@property (nonatomic) @? closeHandler;
@property (nonatomic) UIColor actionButtonColor;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIButton cancelBtn;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) CAGradientLayer shadowViewALayer;
@property (nonatomic) UIView shadowView;
@property (nonatomic) UITextView textView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelBtnAction;
- (id)actionButtonColor;
- (void)addCancelHandler:;
- (void)addCloseHandler:;
- (void)addConfimHandler:;
- (id)cancelBtn;
- (id)closeHandler;
- (id)confirmBtn;
- (void)confirmBtnAction;
- (id)confirmHandler;
- (id)findSuperViewInVisibleWindow;
- (id)initDialogViewWithTitle:content:appName:;
- (void)setActionButtonColor:;
- (void)setCancelBtn:;
- (void)setCancelButtonColor:;
- (void)setCancelButtonTitleColor:;
- (void)setCloseHandler:;
- (void)setConfirmBtn:;
- (void)setConfirmButtonColor:;
- (void)setConfirmButtonTitleColor:;
- (void)setConfirmHandler:;
- (void)setContainerViewColor:;
- (void)setDialogContentView:;
- (void)setShadowViewALayer:;
- (void)setupSubView;
- (id)shadowViewALayer;
- (id)content;
- (id)textView;
- (void)setContent:;
- (id)contentView;
- (void)layoutSubviews;
- (void)hide;
- (void)setCancelHandler:;
- (void)setTitle:;
- (id)hitTest:withEvent:;
- (void)show;
- (void)setTextView:;
- (id)title;
- (void).cxx_destruct;
- (void)setShadowView:;
- (void)setContentView:;
- (id)shadowView;
- (id)cancelHandler;
- (void)setCancelButtonTitle:;
- (void)setConfirmButtonTitle:;
- (void)otherAction;
@end
