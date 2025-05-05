@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration
@property (nonatomic) NSInteger projectorMode;
@property (nonatomic) BOOL supplementalPointCloudData;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setProjectorMode:;
- (BOOL)supplementalPointCloudData;
- (int)projectorMode;
- (id)description;
- (void)setSupplementalPointCloudData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
