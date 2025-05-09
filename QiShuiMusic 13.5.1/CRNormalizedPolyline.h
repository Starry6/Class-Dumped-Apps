@interface CRNormalizedPolyline : NSObject
@property (nonatomic) {CGSize=dd} normalizationSize;
@property (nonatomic) CRImageSpacePolyline denormalizedPolyline;
@property (nonatomic) {ObjectRef<const CGPath *>=^{CGPath}} _pathRef;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) r^{CGPath=} path;
@property (nonatomic) NSArray pointValues;
@property (nonatomic) Q pointCount;
- (id)path;
- (id)init;
- (void)appendPoint:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_pathRef;
- (unsigned long long)pointCount;
- (id)initWithPolyline:;
- (id)normalizationSize;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:;
- (void)enumeratePoints:;
- (id)simplified;
- (id)pointValues;
- (id)polylineByAppendingPoint:;
- (id)polylineByAppendingPolyline:;
- (void)appendPolyline:;
- (void)set_pathRef:;
- (id)initWithNormalizedPoints:count:size:;
- (id)initWithDenormalizedPolyline:size:;
- (id)initWithNormalizedPointValues:size:;
- (void)setNormalizationSize:;
- (id)denormalizedPolyline;
- (void)setDenormalizedPolyline:;
+ (BOOL)supportsSecureCoding;
@end
