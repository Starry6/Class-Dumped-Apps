@interface BWStillImageProcessorCoordinator : NSObject
- (void)dealloc;
- (id)controllerForType:;
- (id)initWithProcessorControllers:;
- (id)processorControllerNames;
@end
