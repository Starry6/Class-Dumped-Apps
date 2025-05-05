@interface MLSecureModel : MLModel
@property (nonatomic) NSXPCConnection connectionToModelSecurityService;
@property (nonatomic) NSObject<CoreMLModelSecurityProtocol> secureModelProxy;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)parameterValueForKey:error:;
- (id)predictionsFromBatch:error:;
- (void)dealloc;
- (id)predictionFromFeatures:options:error:;
- (id)predictionsFromBatch:options:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)connectionToModelSecurityService;
- (void)setConnectionToModelSecurityService:;
- (id)secureModelProxy;
- (void)setSecureModelProxy:;
+ (BOOL)supportsSecureCoding;
+ (id)sandboxExtensionPathsForModelURL:;
+ (id)sandboxExtensionTokenForModelURL:;
+ (id)modelWithContentsOfURL:configuration:decryptCredential:error:;
+ (id)modelWithContentsOfURL:decryptCredential:error:;
@end
