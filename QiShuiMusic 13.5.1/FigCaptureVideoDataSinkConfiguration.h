@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)sinkType;
- (BOOL)sceneStabilityMetadataEnabled;
- (void)setSceneStabilityMetadataEnabled:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setOptimizedForPreview:;
- (void)setDiscardsLateVideoFrames:;
- (BOOL)discardsLateVideoFrames;
- (BOOL)optimizedForPreview;
@end
