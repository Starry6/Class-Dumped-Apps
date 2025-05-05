@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:;
- (int)enqueueInputForProcessing:delegate:;
- (void)cancelProcessing;
- (void)inputReadyToExecute:;
- (BOOL)finishProcessingCurrentInputNow;
@end
