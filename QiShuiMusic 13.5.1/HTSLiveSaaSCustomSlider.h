@interface HTSLiveSaaSCustomSlider : UISlider
@property (nonatomic) double height;
- (id)trackRectForBounds:;
- (BOOL)pointInside:withEvent:;
- (double)height;
- (void)setHeight:;
@end
