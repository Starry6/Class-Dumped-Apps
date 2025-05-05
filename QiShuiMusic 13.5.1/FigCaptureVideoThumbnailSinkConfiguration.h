@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) {CGSize=dd} thumbnailSize;
@property (nonatomic) NSArray filters;
- (id)initWithXPCEncoding:;
- (id)filters;
- (void)dealloc;
- (id)copyXPCEncoding;
- (int)sinkType;
- (id)thumbnailSize;
- (void)setFilters:;
- (void)setThumbnailSize:;
- (id)copyWithZone:;
@end
