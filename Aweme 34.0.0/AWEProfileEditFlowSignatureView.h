@interface AWEProfileEditFlowSignatureView : AWEProfileEditFlowStepView
@property (nonatomic) UITextView textView;
@property (nonatomic) UITextView contentCalculateHeightTextView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)contentCalculateHeightTextView;
- (void)setContentCalculateHeightTextView:;
- (void)tapNextButton:;
- (void)tapPrevButton:;
- (id)textView;
- (void)setTextView:;
- (void)viewWillDisappear:;
- (id)initWithFrame:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)layoutManager:lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
@end
