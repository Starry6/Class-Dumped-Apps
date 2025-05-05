@interface IESLiveSaaSCountDownLabel : UILabel
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? formatBlock;
- (void)setFormatBlock:;
- (id)formatBlock;
- (void)pr_countDownWithStartDate:stopDate:;
- (void)pr_countDownWithTimeInterval:;
- (id)init;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)updateWithModel:;
@end
