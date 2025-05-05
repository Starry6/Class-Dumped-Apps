@interface FigBaseCABackdropLayer : CABackdropLayer
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
- (void)setPreventsChangesToSublayerHierarchy:;
- (void)insertSublayer:below:;
+ (id)defaultActionForKey:;
@end
