@interface NEIKEv2Listener : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> listenerQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reportError:;
- (void)receivePacket:;
- (void)requestConfigurationForSession:sessionConfig:childConfig:validateAuthBlock:responseBlock:;
- (void)sessionFailedBeforeRequestingConfiguration:;
- (id)initWithListenerIKEConfig:saSession:listenerUDPPort:listenerInterface:listenerQueue:delegate:delegateQueue:;
- (id)initWithListenerIKEConfig:saSession:listenerUDPPort:listenerQueue:delegate:delegateQueue:;
- (id)initWithListenerIKEConfig:saSession:packetDelegate:listenerQueue:delegate:delegateQueue:;
- (id)initWithListenerIKEConfig:kernelSASessionName:listenerUDPPort:listenerInterface:listenerQueue:delegate:delegateQueue:;
- (id)initWithListenerIKEConfig:kernelSASessionName:listenerUDPPort:listenerQueue:delegate:delegateQueue:;
- (id)initWithListenerIKEConfig:kernelSASessionName:packetDelegate:listenerQueue:delegate:delegateQueue:;
- (id)listenerQueue;
@end
