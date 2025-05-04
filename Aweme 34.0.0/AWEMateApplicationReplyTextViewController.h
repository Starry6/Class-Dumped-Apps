@interface AWEMateApplicationReplyTextViewController : AFDTextInputAlertController
@property (nonatomic) AWEShadowGradientTextView textView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) BOOL showTipsLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (BOOL)showTipsLabel;
- (void)replyUser:mateApplyId:completion:;
- (void)setShowTipsLabel:;
- (id)messagesModelString:;
- (id)textView;
- (void)setTextView:;
- (id)init;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:;
- (void).cxx_destruct;
@end
