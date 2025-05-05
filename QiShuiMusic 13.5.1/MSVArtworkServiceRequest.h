@interface MSVArtworkServiceRequest : NSObject
@property (nonatomic) # operationClass;
@property (nonatomic) q operationPriority;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (Class)operationClass;
- (void)addSandboxExtensionIfNeededForURL:;
- (void)consumeSandboxExtensions;
- (void)releaseSandboxExtensions;
- (long long)operationPriority;
+ (BOOL)supportsSecureCoding;
@end
