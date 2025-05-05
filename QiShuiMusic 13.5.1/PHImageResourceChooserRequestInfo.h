@interface PHImageResourceChooserRequestInfo : NSObject
@property (nonatomic) <PHResourceChooserAsset> asset;
@property (nonatomic) {CGSize=dd} desiredSize;
@property (nonatomic) float requestedScale;
@property (nonatomic) NSArray allowedResourceVersions;
@property (nonatomic) PHImageRequestBehaviorSpec behaviorSpec;
@property (nonatomic) BOOL isCloudShared;
@property (nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic) NSString loggingPrefix;
- (id)behaviorSpec;
- (id)loggingPrefix;
- (id)allowedResourceVersions;
- (id)asset;
- (id)desiredSize;
- (float)requestedScale;
- (void)setLoggingPrefix:;
- (double)fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
- (id)initWithAsset:desiredSize:requestedScale:allowedResourceVersions:behaviorSpec:cloudSharedMode:fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:loggingPrefix:;
- (void).cxx_destruct;
- (BOOL)isCloudShared;
@end
