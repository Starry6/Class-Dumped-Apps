@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements
@property (nonatomic) BOOL deviceOriented;
@property (nonatomic) NSInteger rotationDegrees;
@property (nonatomic) q videoContentMode;
@property (nonatomic) BOOL includesInvalidContent;
@property (nonatomic) <BWInferenceCropDescriptor> cropDescriptor;
- (void)dealloc;
- (id)initWithFormat:;
- (BOOL)includesInvalidContent;
- (int)rotationDegrees;
- (long long)videoContentMode;
- (id)cropDescriptor;
- (void)setDeviceOriented:;
- (void)setRotationDegrees:;
- (void)setCropDescriptor:;
- (void)setVideoContentMode:;
- (void)setIncludesInvalidContent:;
- (BOOL)deviceOriented;
+ (id)defaultEspressoFormatRequirementsWithWidth:height:;
@end
