@interface SCNText : SCNGeometry
@property (nonatomic) double extrusionDepth;
@property (nonatomic) @ string;
@property (nonatomic) UIFont font;
@property (nonatomic) BOOL wrapped;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) NSString truncationMode;
@property (nonatomic) NSString alignmentMode;
@property (nonatomic) double chamferRadius;
@property (nonatomic) UIBezierPath chamferProfile;
@property (nonatomic) double flatness;
- (id)string;
- (id)init;
- (void)dealloc;
- (id)truncationMode;
- (id)copy;
- (void)setString:;
- (void)setFont:;
- (id)initWithCoder:;
- (BOOL)isWrapped;
- (void)encodeWithCoder:;
- (void)setTruncationMode:;
- (id)font;
- (id)description;
- (id)params;
- (id)containerFrame;
- (id)copyWithZone:;
- (long long)primitiveType;
- (void)setPrimitiveType:;
- (void)setWrapped:;
- (id)alignmentMode;
- (void)setAlignmentMode:;
- (double)flatness;
- (void)setFlatness:;
- (void)setChamferRadius:;
- (void)setContainerFrame:;
- (BOOL)getBoundingBoxMin:max:;
- (BOOL)getBoundingSphereCenter:radius:;
- (id)__createCFObject;
- (id)presentationGeometry;
- (void)_syncObjCModel:;
- (double)chamferRadius;
- (double)extrusionDepth;
- (void)setExtrusionDepth:;
- (id)chamferProfile;
- (void)setChamferProfile:;
- (id)initWithTextGeometryRef:;
- (id)initPresentationTextGeometryWithTextGeometryRef:;
- (id)copyAnimationPathForKeyPath:animation:;
- (BOOL)_wantsSeparateGeometryElements;
- (void)set_wantsSeparateGeometryElements:;
- (double)discretizedStraightLineMaxLength;
- (void)setDiscretizedStraightLineMaxLength:;
- (id)patchFont:;
- (void)_customDecodingOfSCNText:;
- (void)_customEncodingOfSCNText:;
+ (id)labelGeometry:font:;
+ (BOOL)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:extrusionDepth:;
@end
