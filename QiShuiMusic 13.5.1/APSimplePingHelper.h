@interface APSimplePingHelper : NSObject
@property (nonatomic) ASSSimplePing simplePing;
@property (nonatomic) @ target;
@property (nonatomic) : sel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSel:;
- (void)failPing:;
- (id)initWithAddress:target:sel:;
- (void)killPing;
- (void)setSimplePing:;
- (id)simplePing;
- (void)simplePing:didFailToSendPacket:error:;
- (void)successPing;
- (void)simplePing:didReceivePingResponsePacket:sequenceNumber:;
- (void)simplePing:didStartWithAddress:;
- (SEL)sel;
- (void)simplePing:didFailWithError:;
- (void)setTarget:;
- (void)endTime;
- (void).cxx_destruct;
- (id)target;
- (void)go;
+ (void)ping:target:sel:;
@end
