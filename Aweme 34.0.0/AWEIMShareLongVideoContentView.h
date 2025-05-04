@interface AWEIMShareLongVideoContentView : AWEIMShareLongVideoCardView
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) @? tapAction;
- (id)tapGes;
- (void)setTapGes:;
- (void)updateWithLongVideoInfo:coverURL:shareWithTimestamp:;
- (id)tagBackgroudColor:;
- (id)tagTextColor:;
- (void)p_didTapCover:;
- (id)init;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
