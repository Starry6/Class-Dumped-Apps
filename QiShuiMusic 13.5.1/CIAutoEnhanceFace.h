@interface CIAutoEnhanceFace : NSObject
@property (nonatomic) NSInteger size;
@property (nonatomic) NSInteger centerX;
@property (nonatomic) NSInteger centerY;
@property (nonatomic) double I;
@property (nonatomic) double Q;
- (id)description;
- (int)size;
- (int)centerX;
- (int)centerY;
- (id)faceRect;
- (id)initWithBounds:andImage:usingContext:;
- (double)I;
- (double)Q;
@end
