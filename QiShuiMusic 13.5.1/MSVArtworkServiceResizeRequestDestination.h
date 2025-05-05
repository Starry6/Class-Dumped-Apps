@interface MSVArtworkServiceResizeRequestDestination : NSObject
@property (nonatomic) q format;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) double compressionQuality;
- (long long)format;
- (id)initWithCoder:;
- (id)destinationURL;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)size;
- (double)compressionQuality;
- (id)initWithFormat:size:compressionQuality:destinationURL:;
+ (BOOL)supportsSecureCoding;
+ (id)destinationWithFormat:size:url:;
+ (id)jpegDestinationWithSize:compressionQuality:url:;
@end
