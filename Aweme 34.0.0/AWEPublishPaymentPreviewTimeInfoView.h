@interface AWEPublishPaymentPreviewTimeInfoView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton selectTimeButton;
@property (nonatomic) @? selectTimeBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateSelectTimeInfo:;
- (void)updateDescInfo:;
- (void)setSelectTimeBlock:;
- (void)selectTimeButtonAction:;
- (void)setSelectTimeButton:;
- (id)selectTimeBlock;
- (id)selectTimeButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
