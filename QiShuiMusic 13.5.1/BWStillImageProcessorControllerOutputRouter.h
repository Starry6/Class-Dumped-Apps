@interface BWStillImageProcessorControllerOutputRouter : NSObject
@property (nonatomic) @? outputSampleBufferRouter;
@property (nonatomic) NSArray bypassedProcessorsTypes;
- (void)dealloc;
- (id)initWithOutputSampleBufferRouter:;
- (void)addBypassedProcessorType:;
- (id)bypassedProcessorsTypes;
- (id)outputSampleBufferRouter;
@end
