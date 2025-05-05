@interface PKStrokeMask : NSObject
@property (nonatomic) NSData rawValue;
- (id)rawValue;
- (id)initWithArchive:;
- (void)_transformBy:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)bezierPath;
- (id)initWithRawValue:;
- (void)saveToArchive:;
- (id)maskPaths;
- (id)initWithMaskPaths:centerlineSlices:;
- (id)initWithBezierPath:stroke:;
- (id)centerlineSlices;
- (void)calculateCenterlineSlices:;
- (id)_boundsWithTransform:;
- (id)maskTransformedBy:;
@end
