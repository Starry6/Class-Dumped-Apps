@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline
@property (nonatomic) BWRemoteQueueSinkNode sinkNode;
- (void)dealloc;
- (void)setSinkNode:;
- (id)sinkNode;
@end
