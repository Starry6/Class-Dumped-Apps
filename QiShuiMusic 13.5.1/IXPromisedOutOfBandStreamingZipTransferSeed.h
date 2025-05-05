@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed
@property (nonatomic) Q archiveBytesConsumed;
@property (nonatomic) Q archiveSizeBytes;
@property (nonatomic) NSURL extractionPath;
@property (nonatomic) NSDictionary szOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)extractionPath;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (unsigned long long)archiveBytesConsumed;
- (void)setArchiveBytesConsumed:;
- (unsigned long long)archiveSizeBytes;
- (void)setArchiveSizeBytes:;
- (id)szOptions;
- (void)setSzOptions:;
- (void)setExtractionPath:;
+ (BOOL)supportsSecureCoding;
@end
