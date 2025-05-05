@interface CJPayVerifyCodeTimerLabel : CJPayTimerView
@property (nonatomic) NSString silentTitle;
@property (nonatomic) NSString dynamicTitle;
@property (nonatomic) UIColor silentColor;
@property (nonatomic) UIColor dynamicColor;
@property (nonatomic) @? timeRunOutBlock;
@property (nonatomic) @? sizeChangedTo;
- (void)setSilentColor:;
- (void)setSilentTitle:;
- (id)timeRunOutBlock;
- (void)configTimerLabel:silentT:dynamicColor:silentColor:;
- (void)contentChange;
- (void)currentCountChangeTo:;
- (id)dynamicColor;
- (id)dynamicTitle;
- (void)setDynamicColor:;
- (void)setDynamicTitle:;
- (void)setSizeChangedTo:;
- (void)setTimeRunOutBlock:;
- (id)silentColor;
- (id)silentTitle;
- (id)sizeChangedTo;
- (void)startTimerWithCountTime:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;
@end
