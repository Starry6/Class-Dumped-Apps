@interface GKCheckerboardNoiseSource : GKNoiseSource
@property (nonatomic) double squareSize;
- (id)init;
- (id)initWithSquareSize:;
- (double)valueAt:;
- (id)cloneModule;
- (double)squareSize;
- (void)setSquareSize:;
+ (id)checkerboardNoiseWithSquareSize:;
@end
