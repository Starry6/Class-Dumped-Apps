@interface BDMannorAdFeedbackView : UIView
@property (nonatomic) BDMannorAdFeedbackViewModel model;
@property (nonatomic) <BDMannorAdFeedbackProtocol> delegate;
@property (nonatomic) NSMutableArray normalButtonArray;
@property (nonatomic) NSMutableArray reportButtonArray;
@property (nonatomic) NSMutableArray partingLineArray;
@property (nonatomic) UILabel reportLabel;
@property (nonatomic) UIView feedbackView;
- (void)setReportLabel:;
- (id)createNormalButtonWithText:;
- (id)createPartingLine;
- (id)createReportButtonWithText:;
- (void)feedbackViewBack;
- (id)initWithModel:delegate:;
- (void)normalActionWithIndex:;
- (id)normalButtonArray;
- (id)partingLineArray;
- (void)reportActionWithIndex:;
- (id)reportButtonArray;
- (void)setNormalButtonArray:;
- (void)setPartingLineArray:;
- (void)setReportButtonArray:;
- (id)model;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)feedbackView;
- (void)setFeedbackView:;
- (void)setupUI;
- (id)reportLabel;
- (void)layoutUI;
@end
