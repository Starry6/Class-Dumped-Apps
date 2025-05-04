@interface AWERateSlider : UIControl
@property (nonatomic) NSArray stars;
@property (nonatomic) q value;
- (void)setStars:;
- (void)updateValueForTouch:;
- (long long)value;
- (id)init;
- (void)setValue:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (id)stars;
- (void)setupUI;
@end
