@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString svgContent;
- (id)urls;
- (id)imageSize;
- (id)initWithURL:extraInfo:;
- (id)initWithURL:imageSize:;
- (id)initWithURLs:imageSize:;
- (id)initWithSVGContent:imageSize:;
- (id)_imageSizeValueWithSize:;
- (id)svgContent;
@end
