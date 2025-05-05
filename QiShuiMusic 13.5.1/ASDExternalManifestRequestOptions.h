@interface ASDExternalManifestRequestOptions : ASDRequestOptions
@property (nonatomic) NSURL manifestURL;
@property (nonatomic) BOOL shouldHideUserPrompts;
- (id)initWithURL:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)manifestURL;
- (BOOL)shouldHideUserPrompts;
- (void)setShouldHideUserPrompts:;
+ (BOOL)supportsSecureCoding;
@end
