@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) q destinationFormat;
@property (nonatomic) double destinationCompressionQuality;
- (void)setSourceURL:;
- (id)sourceURL;
- (void)setDestinationURL:;
- (id)initWithCoder:;
- (id)destinationURL;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (Class)operationClass;
- (long long)operationPriority;
- (id)initWithSourceURL:destinationURL:destinationFormat:;
- (long long)destinationFormat;
- (void)setDestinationFormat:;
- (double)destinationCompressionQuality;
- (void)setDestinationCompressionQuality:;
+ (BOOL)supportsSecureCoding;
@end
