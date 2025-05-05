@interface CLFindMyAccessoryRangingManager : NSObject
@property (nonatomic) <CLFindMyAccessoryRangingManagerDelegate> delegate;
- (id)init;
- (id)initWithDelegate:delegateQueue:;
- (void)handleMessage:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)handleInterruption;
- (id).cxx_construct;
- (void)connectToDevice:;
- (void)disconnectFromDevice:;
- (void)initRoseWithParameters:onDevice:;
- (void)stopRoseWithParameters:onDevice:;
- (void)setRoseRangingParameters:onDevice:;
- (void)prepareForStartRangingOnDevice:;
- (void)startRangingWithParameters:onDevice:;
- (void)stopRangingOnDevice:;
- (void)startEventCounterOnDevice:;
- (void)stopEventCounterOnDevice:;
- (void)fetchFirmwareVersionFromDevice:;
@end
