@interface AWEUserLoginInputView : UIView
@property (nonatomic) AWEUserLoginInputModel model;
@property (nonatomic) DYLoginInputView inputView;
@property (nonatomic) @? didInputChange;
- (void)setDidInputChange:;
- (void)updateInputContent:;
- (void)updateOnlySupportNumber:;
- (id)didInputChange;
- (void)setModel:;
- (void)clearInput;
- (BOOL)becomeFirstResponder;
- (id)initWithModel:;
- (void)setInputView:;
- (id)model;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)inputView;
- (void)setupUI;
@end
