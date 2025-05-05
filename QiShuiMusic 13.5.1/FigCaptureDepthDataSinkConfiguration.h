@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) BOOL discardsLateDepthData;
@property (nonatomic) BOOL filteringEnabled;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)sinkType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)filteringEnabled;
- (void)setDiscardsLateDepthData:;
- (void)setFilteringEnabled:;
- (BOOL)discardsLateDepthData;
@end
