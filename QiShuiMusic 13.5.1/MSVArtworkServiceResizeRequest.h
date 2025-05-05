@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest
@property (nonatomic) NSMutableArray resizeDestinations;
@property (nonatomic) NSURL sourceURL;
- (void)setSourceURL:;
- (id)sourceURL;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (Class)operationClass;
- (id)initWithSourceURL:;
- (void)addDestinationWithFormat:size:url:;
- (void)addJPEGDestinationWithSize:compressionQuality:url:;
- (void)enumerateDestinationsUsingBlock:;
- (id)resizeDestinations;
- (void)setResizeDestinations:;
+ (BOOL)supportsSecureCoding;
@end
