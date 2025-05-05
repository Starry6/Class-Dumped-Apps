@interface AVAudioIOController_iOS : NSObject
@property (nonatomic) I timingStateSlot;
@property (nonatomic) {AVAudioIOPeriod=ddQf} IOPeriod;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL supportsPresentationTime;
@property (nonatomic) {AVAudioTimeInterval=ddQ} dynamicLatency;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)currentTime;
- (id).cxx_construct;
- (id)presentationTime;
- (long long)createIOEventBlock:;
- (void)destroyIOEventBlock:;
- (id)IOPeriod;
- (BOOL)supportsPresentationTime;
- (id)dynamicLatency;
- (id)initWithSession:xpcConnection:timingStateSlot:isDecoupledInput:;
- (unsigned int)timingStateSlot;
- (void)setTimingStateSlot:;
- (void)privateDispatchIOControllerEvent:;
@end
