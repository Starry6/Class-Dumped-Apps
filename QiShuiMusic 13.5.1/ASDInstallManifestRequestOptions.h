@interface ASDInstallManifestRequestOptions : ASDRequestOptions
@property (nonatomic) ASDJobManifest manifest;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)manifest;
- (id)copyWithZone:;
- (id)initWithManifest:;
- (void)setManifest:;
+ (BOOL)supportsSecureCoding;
@end
