@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject
@property (nonatomic) FigDepthDataCaptureConnectionConfiguration depthDataConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoDataConnectionConfiguration;
@property (nonatomic) FigMetadataObjectCaptureConnectionConfiguration metadataObjectConnectionConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)videoDataConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
@end
