@interface AKRoundedPath : NSObject
@property (nonatomic) NSMutableArray points;
@property (nonatomic) ^{CGPath=} CGPath;
- (id)boundingRect;
- (void).cxx_destruct;
- (id)points;
- (id)CGPath;
- (void)setCGPath:;
- (void)setPoints:;
- (void)addContinuousCornerToPath:trueCorner:cornerRadius:corners:portion:clockwise:fullRadius:;
- (id)initWithPoints:count:;
- (void)addLineToPointX:y:;
- (void)closeSubpath;
- (id)initWithRect:cornerRadii:smoothPillShapes:;
+ (id)pathWithRoundedRect:cornerRadius:;
+ (id)pathWithRect:;
+ (id)pathWithEllipseInRect:;
@end
