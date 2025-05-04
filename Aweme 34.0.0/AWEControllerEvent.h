@interface AWEControllerEvent : NSObject
@property (nonatomic) NSPointerArray listeners;
@property (nonatomic) AWEControllerEventDistributor distributor;
@property (nonatomic) NSLock lock;
- (id)getNonNullListens;
- (id)listeners;
- (id)init;
- (void)setLock:;
- (void)setListeners:;
- (id)lock;
- (void)unregisterListener:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)registerListener:;
- (void)setDistributor:;
- (id)distributor;
@end
