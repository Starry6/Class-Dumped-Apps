@interface VNSceneObservation : VNFeaturePrintObservation
@property (nonatomic) NSArray sceneprints;
@property (nonatomic) NSString sceneprintVersion;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)elementType;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)sceneprints;
- (unsigned long long)elementCount;
- (id)vn_cloneObject;
- (id)initWithRequestRevision:sceneprints:;
- (id)initWithOriginatingRequestSpecifier:sceneprints:;
- (id)sceneprintVersion;
+ (BOOL)supportsSecureCoding;
+ (id)sceneprintCurrentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (id)observationWithSceneprints:;
@end
