@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) NSInteger subType;
- (int)sinkType;
- (id)initWithSinkSubType:;
- (int)subType;
@end
