@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithURL:packageURL:error:;
+ (BOOL)supportsSecureCoding;
@end
