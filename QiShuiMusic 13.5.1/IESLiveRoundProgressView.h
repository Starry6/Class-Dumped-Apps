@interface IESLiveRoundProgressView : UIView
@property (nonatomic) CAShapeLayer backgroundLayer;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) double progress;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setProgress:;
- (double)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (id)progressLayer;
- (void)setProgressLayer:;
@end
