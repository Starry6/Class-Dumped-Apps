@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject
@property (nonatomic) FigVisionDataCaptureConnectionConfiguration visionDataConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoDataConnectionConfiguration;
- (void)dealloc;
- (id)videoDataConnectionConfiguration;
- (id)visionDataConnectionConfiguration;
@end
