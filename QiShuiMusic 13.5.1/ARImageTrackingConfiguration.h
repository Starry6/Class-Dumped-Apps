@interface ARImageTrackingConfiguration : ARConfiguration
@property (nonatomic) BOOL autoFocusEnabled;
@property (nonatomic) NSSet trackingImages;
@property (nonatomic) q maximumNumberOfTrackedImages;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)createTechniques:;
- (void)setMaximumNumberOfTrackedImages:;
- (id)trackingImages;
- (void)setTrackingImages:;
- (long long)maximumNumberOfTrackedImages;
+ (id)new;
+ (BOOL)isSupported;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:;
+ (id)recommendedVideoFormatFor4KResolution;
@end
