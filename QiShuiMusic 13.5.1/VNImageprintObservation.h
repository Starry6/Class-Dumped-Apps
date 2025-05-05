@interface VNImageprintObservation : VNObservation
@property (nonatomic) VNImageprint imageprint;
@property (nonatomic) BOOL imageprintValid;
@property (nonatomic) NSString imageprintVersion;
@property (nonatomic) NSData rawImageprintDescriptor;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (float)calculateDistanceFromImageprintObservation:;
- (BOOL)isImageprintValid;
- (id)initWithRawImageprintDescriptor:;
- (id)rawImageprintDescriptor;
- (id)imageprint;
- (void)setImageprint:;
- (BOOL)imageprintValid;
- (id)imageprintVersion;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (id)observationWithImageprint:error:;
@end
