@interface IESLiveSaaSTheGreatCardCountDownView : UIView
@property (nonatomic) IESLiveSaaSTheGreatCardCountDownLabel msLabel;
@property (nonatomic) IESLiveSaaSTheGreatCardCountDownLabel sLabel;
@property (nonatomic) IESLiveSaaSTheGreatCardCountDownLabel mLabel;
@property (nonatomic) IESLiveSaaSTheGreatCardCountDownLabel hLabel;
@property (nonatomic) IESLiveSaaSCountTimer timer;
@property (nonatomic) Q duration;
- (id)msLabel;
- (id)createDivider;
- (id)hLabel;
- (id)sLabel;
- (void)setHLabel:;
- (void)setMLabel:;
- (void)setMsLabel:;
- (void)setSLabel:;
- (void)updateCount:;
- (void)dealloc;
- (void)setDuration:;
- (void)setTimer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timer;
- (unsigned long long)duration;
- (void)setupUI;
- (id)mLabel;
@end
