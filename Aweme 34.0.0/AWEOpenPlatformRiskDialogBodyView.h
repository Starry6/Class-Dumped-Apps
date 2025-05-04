@interface AWEOpenPlatformRiskDialogBodyView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel leftlabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) double dialogInnerWidth;
- (id)descLabel;
- (void)setDescLabel:;
- (double)dialogInnerWidth;
- (id)leftlabel;
- (id)initWithDialogInnerWidth:;
- (void)setupAddress:;
- (void)setLeftlabel:;
- (void)setDialogInnerWidth:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)rightLabel;
- (id)topLine;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)setTopLine:;
- (void)setRightLabel:;
@end
