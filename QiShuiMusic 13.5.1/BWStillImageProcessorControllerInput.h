@interface BWStillImageProcessorControllerInput : NSObject
@property (nonatomic) <BWStillImageProcessorControllerInputUpdatesDelegate> delegate;
@property (nonatomic) BWStillImageSettings stillImageSettings;
@property (nonatomic) FigCaptureStillImageSettings settings;
@property (nonatomic) BWStillImageCaptureSettings captureSettings;
@property (nonatomic) BWStillImageCaptureStreamSettings captureStreamSettings;
@property (nonatomic) BWStillImageProcessingSettings processingSettings;
@property (nonatomic) BOOL isMaster;
@property (nonatomic) NSString portType;
- (id)portType;
- (void)dealloc;
- (id)settings;
- (id)processingSettings;
- (void)setDelegate:;
- (id)stillImageSettings;
- (id)delegate;
- (id)captureStreamSettings;
- (id)captureSettings;
- (id)description;
- (BOOL)isMaster;
- (id)initWithSettings:portType:;
- (void)addOutputSampleBufferRouter:forBufferTypes:;
- (id)outputSampleBufferRouterForBufferType:;
- (void)addBypassedProcessorType:forBufferTypes:;
@end
