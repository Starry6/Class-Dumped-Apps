@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed
@property (nonatomic) Q archiveBytesConsumed;
@property (nonatomic) Q archiveSizeBytes;
@property (nonatomic) NSDictionary szOptions;
@property (nonatomic) NSString sandboxExtensionToken;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSandboxExtensionToken:;
- (id)sandboxExtensionToken;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (unsigned long long)archiveBytesConsumed;
- (void)setArchiveBytesConsumed:;
- (unsigned long long)archiveSizeBytes;
- (void)setArchiveSizeBytes:;
- (id)szOptions;
- (void)setSzOptions:;
+ (BOOL)supportsSecureCoding;
@end
