@interface BWVISProcessorController : NSObject
@property (nonatomic) BOOL longPressModeEnabled;
@property (nonatomic) BOOL flipHorizontalOrientationEnabled;
@property (nonatomic) BWVISProcessorControllerConfiguration configuration;
@property (nonatomic) <BWVISProcessorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFlipHorizontalOrientationEnabled:;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)longPressModeEnabled;
- (void)setLongPressModeEnabled:;
- (void)setConfiguration:;
- (int)finishPendingProcessing;
- (BOOL)flipHorizontalOrientationEnabled;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (int)prepareToProcess;
- (void)didCompleteProcessingOfBuffer:withStatus:;
- (int)enqueueBufferForProcessing:;
@end
