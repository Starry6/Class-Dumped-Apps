@interface IESLiveCircleProgressViewConfig : NSObject
@property (nonatomic) double lineWidth;
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) BOOL clockwise;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double backgroundLineWidth;
- (double)backgroundLineWidth;
- (void)setBackgroundLineWidth:;
- (void)setLineWidth:;
- (double)lineWidth;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)setStartColor:;
- (void)setEndColor:;
- (id)startColor;
- (id)endColor;
- (void)setClockwise:;
- (BOOL)clockwise;
@end
