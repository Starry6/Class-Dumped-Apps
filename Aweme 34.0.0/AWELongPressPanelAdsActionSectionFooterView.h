@interface AWELongPressPanelAdsActionSectionFooterView : UICollectionReusableView
@property (nonatomic) DUXTextArea textInputView;
@property (nonatomic) @? didBeginInput;
@property (nonatomic) @? didCompletedInput;
- (void)setDidCompletedInput:;
- (void)setDidBeginInput:;
- (id)didBeginInput;
- (id)didCompletedInput;
- (id)inputFrameInWindow;
- (id)textInputView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextInputView:;
- (void)setupViews;
@end
