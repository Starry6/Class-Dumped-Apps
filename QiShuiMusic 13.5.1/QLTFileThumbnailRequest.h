@interface QLTFileThumbnailRequest : QLTThumbnailRequest
@property (nonatomic) FPSandboxingURLWrapper quicklookSandboxWrapper;
@property (nonatomic) FPSandboxingURLWrapper genericSandboxWrapper;
@property (nonatomic) QLCacheBasicVersionedFileIdentifier fileIdentifier;
@property (nonatomic) FPItem item;
- (id)item;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithFileAtURL:size:scale:iconMode:;
- (id)quicklookSandboxWrapper;
- (id)genericSandboxWrapper;
- (id)computeContentType;
- (BOOL)shouldProvideFoldedGenericIcon;
- (id)initWithFileAtURL:size:minimumDimension:scale:iconMode:error:;
- (id)initWithFileAtURL:size:minimumDimension:scale:iconMode:error:shouldMakeSandboxWrapper:;
+ (BOOL)supportsSecureCoding;
@end
