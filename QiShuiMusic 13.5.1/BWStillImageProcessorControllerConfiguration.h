@interface BWStillImageProcessorControllerConfiguration : NSObject
@property (nonatomic) NSDictionary sensorConfigurationsByPortType;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (nonatomic) <MTLCommandQueue> metalCommandQueue;
@property (nonatomic) BWInferenceScheduler inferenceScheduler;
@property (nonatomic) I figThreadPriority;
- (void)setDeferredProcessingEnabled:;
- (void)dealloc;
- (void)setMetalCommandQueue:;
- (id)metalCommandQueue;
- (BOOL)deferredProcessingEnabled;
- (id)sensorConfigurationsByPortType;
- (void)setSensorConfigurationsByPortType:;
- (id)inferenceScheduler;
- (void)setInferenceScheduler:;
- (unsigned int)figThreadPriority;
- (void)setFigThreadPriority:;
@end
