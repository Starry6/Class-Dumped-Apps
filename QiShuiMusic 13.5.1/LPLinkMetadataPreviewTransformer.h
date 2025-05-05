@interface LPLinkMetadataPreviewTransformer : NSObject
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString previewSummary;
@property (nonatomic) LPImage previewImage;
- (id)metadata;
- (void).cxx_destruct;
- (id)URL;
- (id)previewImage;
- (id)previewSummary;
- (id)initWithMetadata:URL:;
@end
