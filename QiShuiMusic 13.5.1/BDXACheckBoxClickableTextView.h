@interface BDXACheckBoxClickableTextView : UIView
@property (nonatomic) BDXAClickableTextView bottomClickableTextView;
@property (nonatomic) <BDXACheckBoxClickableTextViewDelegate> delegate;
@property (nonatomic) UIButton checkBoxButton;
@property (nonatomic) BOOL isCheckAgreement;
@property (nonatomic) UIButton clickPreTextBtn;
@property (nonatomic) q shouldDisplayCheckBox;
- (id)clickPreTextBtn;
- (id)bottomClickableTextView;
- (id)checkBoxButton;
- (void)checkBoxButtonTapped;
- (BOOL)isCheckAgreement;
- (void)loadSubViews;
- (void)setBottomClickableTextView:;
- (void)setCheckBoxButton:;
- (void)setClickPreTextBtn:;
- (void)setIsCheckAgreement:;
- (void)setShouldDisplayCheckBox:;
- (long long)shouldDisplayCheckBox;
- (void)setDelegate:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
@end
