@interface AWECoverEditorTextPresentView : UIView
@property (nonatomic) UIView textPresentView;
@property (nonatomic) UILabel placeHolderPresentLabel;
@property (nonatomic) UILabel textLengthPresentLabel;
@property (nonatomic) BOOL isContentEmpty;
@property (nonatomic) <AWECoverEditorTextPresentViewDelegate> delegate;
- (id)getContent;
- (void)setContentWithText:;
- (void)updateTextLength;
- (id)textPresentView;
- (id)placeHolderPresentLabel;
- (id)textLengthPresentLabel;
- (void)setIsContentEmpty:;
- (void)beginEditText;
- (BOOL)isContentEmpty;
- (void)setTextPresentView:;
- (void)setPlaceHolderPresentLabel:;
- (void)setTextLengthPresentLabel:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
