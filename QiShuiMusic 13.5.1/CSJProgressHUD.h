@interface CSJProgressHUD : UIView
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) q numberOfLine;
@property (nonatomic) NSString firstLineString;
@property (nonatomic) NSString secondLineString;
- (id)firstLineString;
- (void)creatSubViews;
- (long long)numberOfLine;
- (void)relayoutLabel:string:;
- (id)secondLineString;
- (void)setFirstLineString:;
- (void)setNumberOfLine:;
- (void)setSecondLineString:;
- (void)showInView:hiddenAfterDelay:;
- (void)hidden;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)topLabel;
- (void)setTopLabel:;
- (id)bottomLabel;
- (void)setBottomLabel:;
@end
