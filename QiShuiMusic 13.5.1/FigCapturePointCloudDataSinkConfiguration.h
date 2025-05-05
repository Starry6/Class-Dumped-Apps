@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) BOOL discardsLatePointCloudData;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)sinkType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setDiscardsLatePointCloudData:;
- (BOOL)discardsLatePointCloudData;
@end
