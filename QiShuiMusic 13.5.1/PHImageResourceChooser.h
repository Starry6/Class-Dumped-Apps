@interface PHImageResourceChooser : NSObject
@property (nonatomic) {CGSize=dd} desiredSize;
@property (nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic) BOOL allowHints;
@property (nonatomic) BOOL isCloudSharedMode;
@property (nonatomic) PHImageRequestBehaviorSpec behaviorSpec;
@property (nonatomic) @? resourceHandler;
@property (nonatomic) @ context;
@property (nonatomic) NSString loggingPrefix;
- (void)_reset;
- (id)behaviorSpec;
- (BOOL)allowHints;
- (id)loggingPrefix;
- (id)context;
- (id)resourceHandler;
- (id)desiredSize;
- (id)initWithChooserList:asset:resourceHandler:;
- (BOOL)isCloudSharedMode;
- (void)setAllowHints:;
- (void)setLoggingPrefix:;
- (void)setFallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:;
- (void)setIsCloudSharedMode:;
- (void)setBehaviorSpec:;
- (double)fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
- (Class)_policyHandlerClassForCurrentPolicy;
- (id)initWithAsset:resourceHandler:;
- (void)presentNextQualifyingResource;
- (void).cxx_destruct;
- (void)_updateCachedGeometry;
- (void)reset;
- (void)setResourceHandler:;
- (BOOL)_resourceInfoPassesTestForImageDerivativeOfVideo:;
- (void)setDesiredSize:;
- (void)setContext:;
- (void)moveFirst;
- (id)_requestInfo;
+ (unsigned long long)_chooserSourceOptionsFromBehaviorSpec:allowHints:;
+ (id)_resourceVersionsFromImageRequestVersion:assetHasAdjustments:;
+ (id)_bagFromInfo:asset:behaviorSpec:requiredScale:bagVendor:;
@end
