@interface BWDeferredPipelineParameters : NSObject
@property (nonatomic) NSInteger nrfVersion;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) NSInteger distortionCorrectionVersion;
@property (nonatomic) NSInteger deepZoomVersion;
@property (nonatomic) BOOL quadraProcessingSupportEnabled;
- (void)setIntelligentDistortionCorrectionEnabled:;
- (BOOL)intelligentDistortionCorrectionEnabled;
- (int)deepZoomVersion;
- (void)setDeepZoomVersion:;
- (id)initWithCoder:;
- (int)distortionCorrectionVersion;
- (BOOL)geometricDistortionCorrectionEnabled;
- (void)encodeWithCoder:;
- (void)setGeometricDistortionCorrectionEnabled:;
- (id)description;
- (int)nrfVersion;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)quadraProcessingSupportEnabled;
- (void)setQuadraProcessingSupportEnabled:;
- (void)setNrfVersion:;
- (void)setDistortionCorrectionVersion:;
+ (BOOL)supportsSecureCoding;
@end
