@interface FigBWNodeRenderObserver : NSObject
@property (nonatomic) @? willRenderSampleBufferHandler;
@property (nonatomic) @? formatDidBecomeLiveHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithBWNode:;
- (id)willRenderSampleBufferHandler;
- (void)node:format:didBecomeLiveForInput:;
- (void)node:willRenderSampleBuffer:forInput:;
- (void)setFormatDidBecomeLiveHandler:;
- (id)formatDidBecomeLiveHandler;
- (void)node:format:didBecomeLiveForOutput:;
- (void)setWillRenderSampleBufferHandler:;
@end
