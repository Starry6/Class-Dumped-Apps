@interface LOTBezierPath : NSObject
@property (nonatomic) ^{LOT_Subpath=id{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}^{LOT_Subpath}} headSubpath;
@property (nonatomic) BOOL cacheLengths;
@property (nonatomic) double length;
@property (nonatomic) ^{CGPath=} CGPath;
@property (nonatomic) {CGPoint=dd} currentPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) NSInteger lineCapStyle;
@property (nonatomic) NSInteger lineJoinStyle;
@property (nonatomic) double miterLimit;
@property (nonatomic) double flatness;
@property (nonatomic) BOOL usesEvenOddFillRule;
@property (nonatomic) BOOL empty;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (void)LOT_addCurveToPoint:controlPoint1:controlPoint2:;
- (void)LOT_applyTransform:;
- (void)LOT_closePath;
- (void)LOT_appendPath:;
- (void)LOT_addLineToPoint:;
- (void)LOT_moveToPoint:;
- (void)LOT_removeAllPoints;
- (void)addSubpathWithType:length:endPoint:controlPoint1:controlPoint1:;
- (void)_clearPathData;
- (BOOL)cacheLengths;
- (id)headSubpath;
- (void)lot_enumeratePath:elementsUsingBlock:;
- (void)removeAllSubpaths;
- (void)setCacheLengths:;
- (void)setWithCGPath:;
- (void)trimPathFromT:toT:offset:;
- (void)setLineWidth:;
- (id)init;
- (BOOL)isEmpty;
- (double)lineWidth;
- (void)dealloc;
- (id)currentPoint;
- (double)length;
- (id)bounds;
- (id)copyWithZone:;
- (BOOL)containsPoint:;
- (double)miterLimit;
- (void)setMiterLimit:;
- (id)CGPath;
- (int)lineCapStyle;
- (void)setLineCapStyle:;
- (int)lineJoinStyle;
- (void)setLineJoinStyle:;
- (double)flatness;
- (void)setFlatness:;
- (BOOL)usesEvenOddFillRule;
- (void)setUsesEvenOddFillRule:;
+ (id)newPath;
+ (id)pathWithCGPath:;
@end
