@interface IESLiveRevenueInteractFeedbackDetailCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITextView textView;
@property (nonatomic) IESLiveRevenueInteractFeedbackViewModel viewModel;
@property (nonatomic) IESLiveRevenueInteractFeedbackStyleConfig styleConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStyleConfig:;
- (void)didClickKeyboardReturnKey;
- (id)styleConfig;
- (void)updateWithTitle:viewModel:styleConfig:;
- (id)textView;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)titleLabel;
- (void)textViewDidBeginEditing:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
@end
