@interface FigBaseCALayer : CALayer
@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;
- (id)actionForKey:;
- (id)init;
- (void)removeFromSuperlayer;
- (void)setSublayers:;
- (BOOL)preventsChangesToSublayerHierarchy;
- (void)addSublayer:;
- (void)replaceSublayer:with:;
- (void)insertSublayer:atIndex:;
- (void)insertSublayer:above:;
- (void)setNeedsDisplay;
- (void)setPreventsChangesToSublayerHierarchy:;
- (void)insertSublayer:below:;
- (id)getLayerDisplay;
- (float)getDisplayScale;
+ (id)defaultActionForKey:;
@end
