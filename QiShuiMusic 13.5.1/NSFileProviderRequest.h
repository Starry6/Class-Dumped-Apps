@interface NSFileProviderRequest : NSObject
@property (nonatomic) NSUUID requestingApplicationIdentifier;
@property (nonatomic) NSURL requestingExecutable;
@property (nonatomic) NSFileProviderDomainVersion domainVersion;
@property (nonatomic) BOOL isSystemRequest;
@property (nonatomic) BOOL isFileViewerRequest;
- (BOOL)isSystemRequest;
- (id)init;
- (void)setRequestingExecutable:;
- (id)initWithCoder:;
- (id)requestingExecutable;
- (void)setDomainVersion:;
- (void)encodeWithCoder:;
- (id)requestingApplicationIdentifier;
- (void).cxx_destruct;
- (BOOL)isFileViewerRequest;
- (id)domainVersion;
- (void)setRequestingApplicationIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)_fpdIdentifier;
+ (id)requestFromTheSystem;
+ (id)_dsIdentifier;
+ (id)_finderIdentifier;
@end
