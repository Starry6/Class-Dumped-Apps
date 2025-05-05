@interface BWDeferredProcessorControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) BWDeferredProcessorController processorController;
@property (nonatomic) BWDeferredProcessingContainer container;
@property (nonatomic) NSString photoIdentifier;
- (void)dealloc;
- (id)photoIdentifier;
- (id)container;
- (void)setContainer:photoIdentifier:;
- (id)processorController;
- (void)setProcessorController:;
@end
