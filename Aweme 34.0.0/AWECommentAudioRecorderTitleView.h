@interface AWECommentAudioRecorderTitleView : AWECommentAudioRecorderBaseView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString defaultTitle;
@property (nonatomic) NSString highLightTitle;
@property (nonatomic) UIColor defaultColor;
@property (nonatomic) UIColor highLightColor;
@property (nonatomic) NSString leftTimePreTitle;
- (void)startWorkWithPreState:currentState:;
- (void)stopWorkWithPreState:currentState:;
- (void)willStopWorkWithLeftTime:preState:currentState:;
- (void)setCommonText:;
- (id)leftTimePreTitle;
- (void)setHighLightText:;
- (id)highLightTitle;
- (void)setHighLightTitle:;
- (void)setHighLightColor:;
- (void)setLeftTimePreTitle:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)highLightColor;
- (id)defaultColor;
- (void)setDefaultColor:;
- (void)updateWithViewModel:;
- (id)defaultTitle;
- (void)setDefaultTitle:;
@end
