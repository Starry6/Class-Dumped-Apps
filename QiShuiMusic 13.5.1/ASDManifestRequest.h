@interface ASDManifestRequest : NSObject
@property (nonatomic) NSDictionary manifest;
@property (nonatomic) NSURL manifestURL;
@property (nonatomic) q archiveType;
@property (nonatomic) NSArray certificates;
@property (nonatomic) BOOL pinningRevocationCheckRequired;
@property (nonatomic) NSUUID requestIdentifier;
- (void)setCertificates:;
- (id)requestIdentifier;
- (id)certificates;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setRequestIdentifier:;
- (void).cxx_destruct;
- (id)manifest;
- (void)setManifest:;
- (id)manifestURL;
- (long long)archiveType;
- (void)setArchiveType:;
- (void)setManifestURL:;
- (BOOL)pinningRevocationCheckRequired;
- (void)setPinningRevocationCheckRequired:;
+ (BOOL)supportsSecureCoding;
@end
