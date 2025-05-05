@interface BPSGroupedPublisher : NSObject
@property (nonatomic) BPSMulticast multicast;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMulticast:;
- (void)subscribe:;
- (id)aggregateWithInitial:nextPartialResult:;
- (id)subscribeOnKey:;
- (void).cxx_destruct;
- (id)initWithUpstream:createSubject:;
- (void)connect;
- (id)multicast;
@end
