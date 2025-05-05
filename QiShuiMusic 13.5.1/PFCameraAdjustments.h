@interface PFCameraAdjustments : NSObject
@property (nonatomic) NSString effectFilterName;
@property (nonatomic) NSString portraitEffectFilterName;
@property (nonatomic) AVApplePortraitMetadata portraitMetadata;
@property (nonatomic) BOOL depthEnabled;
@property (nonatomic) Q cinematicVideoRenderingVersion;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) BOOL hasCrop;
- (id)cropRect;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)portraitMetadata;
- (id)copyWithZone:;
- (BOOL)hasCrop;
- (id)portraitEffectFilterName;
- (BOOL)isDepthEnabled;
- (unsigned long long)cinematicVideoRenderingVersion;
- (id)effectFilterName;
- (id)initWithAdjustments:;
- (id)initWithEffectFilter:cropRect:;
+ (BOOL)supportsSecureCoding;
@end
