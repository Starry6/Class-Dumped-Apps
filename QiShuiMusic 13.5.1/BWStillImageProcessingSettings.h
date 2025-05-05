@interface BWStillImageProcessingSettings : NSObject
@property (nonatomic) BWPhotoManifest photoManifest;
@property (nonatomic) NSInteger expectedClientImageCount;
@property (nonatomic) BOOL processIntelligentDistortionCorrection;
@property (nonatomic) BOOL provideDemosaicedRaw;
- (void)dealloc;
- (id)initWithPhotoManifest:processIntelligentDistortionCorrection:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)processIntelligentDistortionCorrection;
- (void)encodeWithCoder:;
- (BOOL)provideDemosaicedRaw;
- (id)description;
- (id)photoManifest;
- (int)expectedClientImageCount;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
