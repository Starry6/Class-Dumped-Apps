@interface CSJCountDownTipsView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton cancelBtn;
@property (nonatomic) BUTimer timer;
@property (nonatomic) @? resultBlock;
@property (nonatomic) q count;
- (id)cancelBtn;
- (void)cancelBtnClicked:;
- (void)setCancelBtn:;
- (void)setTipsLabel:;
- (id)tipsLabel;
- (void)setCount:;
- (void)dismiss;
- (id)contentView;
- (void)show;
- (void)setTimer:;
- (void)resume;
- (id)initWithFrame:;
- (id)resultBlock;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)timer;
- (void)setContentView:;
- (void)pause;
- (long long)count;
- (void)dismiss:;
@end
