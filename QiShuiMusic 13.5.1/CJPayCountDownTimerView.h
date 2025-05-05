@interface CJPayCountDownTimerView : CJPayTimerView
@property (nonatomic) UILabel titleL;
@property (nonatomic) BOOL curTimeIsValid;
@property (nonatomic) <CJPayCountDownTimerViewDelegate> delegate;
@property (nonatomic) q style;
- (BOOL)curTimeIsValid;
- (void)currentCountChangeTo:;
- (void)p_setupUI;
- (void)setCurTimeIsValid:;
- (void)setTitleL:;
- (void)startTimerWithCountTime:;
- (id)titleL;
- (id)init;
- (void)setDelegate:;
- (void)setStyle:;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (long long)style;
- (void)invalidate;
@end
