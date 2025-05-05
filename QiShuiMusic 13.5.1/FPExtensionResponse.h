@interface FPExtensionResponse : NSObject
@property (nonatomic) NSFileProviderDomainVersion domainVersion;
@property (nonatomic) NSDictionary domainUserInfo;
@property (nonatomic) NSInteger extensionPid;
@property (nonatomic) q sequenceNumber;
@property (nonatomic) NSString callDescription;
- (id)domainUserInfo;
- (void)setDomainUserInfo:;
- (id)initWithCoder:;
- (void)setDomainVersion:;
- (void)setSequenceNumber:;
- (void)encodeWithCoder:;
- (long long)sequenceNumber;
- (void).cxx_destruct;
- (id)domainVersion;
- (id)description;
- (int)extensionPid;
- (void)setExtensionPid:;
- (id)callDescription;
- (void)setCallDescription:;
+ (BOOL)supportsSecureCoding;
@end
