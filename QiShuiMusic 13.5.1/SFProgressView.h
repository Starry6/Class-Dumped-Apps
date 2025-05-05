@interface SFProgressView : UIView
@property (nonatomic) q style;
@property (nonatomic) double progress;
@property (nonatomic) double radius;
@property (nonatomic) double trackWidth;
@property (nonatomic) UIColor trackTintColor;
- (void)setRadius:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)setStyle:;
- (double)radius;
- (double)progress;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (long long)style;
- (void)setProgress:animated:completion:;
- (void)setTrackTintColor:;
- (id)trackTintColor;
- (void)setTrackWidth:;
- (void)_updateRectangularProgressFill;
- (double)trackWidth;
@end
