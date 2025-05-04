@interface AWECircleLayer : CALayer
@property (nonatomic) double innerFragment;
- (void)drawCircleInContext:;
- (double)innerFragment;
- (void)setInnerFragment:;
- (void)drawInContext:;
+ (id)circleLayerWithUsePinkColor:;
+ (BOOL)needsDisplayForKey:;
@end
