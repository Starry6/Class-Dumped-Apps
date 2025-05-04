@interface AWEPlayInteractionNewSatisfactionFeedbackElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UILabel feedbackLabel;
@property (nonatomic) UIButton workButton;
@property (nonatomic) UIButton inutileButton;
@property (nonatomic) ADFeelGoodInfo fdFeelGoodInfo;
@property (nonatomic) NSString itemID;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)feedbackLabel;
- (void)setFeedbackLabel:;
- (BOOL)shouldAppearWithData:;
- (void)hideMutexTempElement:;
- (id)inutileButton;
- (void)inutileButtonAction;
- (id)workButton;
- (void)workButtonAction;
- (void)setWorkButton:;
- (void)setInutileButton:;
- (void)setFdFeelGoodInfo:;
- (id)fdFeelGoodInfo;
- (id)itemID;
- (void)setItemID:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
