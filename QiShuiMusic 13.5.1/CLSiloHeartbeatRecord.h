@interface CLSiloHeartbeatRecord : NSObject
@property (nonatomic) CLSilo silo;
@property (nonatomic) # svcClass;
@property (nonatomic) NSString svcName;
@property (nonatomic) NSInteger residentCount;
@property (nonatomic) NSInteger synCount;
@property (nonatomic) NSInteger ackCount;
- (void)syn;
- (id)svcName;
- (int)residentCount;
- (id)silo;
- (void)ack;
- (void).cxx_destruct;
- (Class)svcClass;
- (id)initTrackingServiceClass:name:;
- (int)synCount;
- (int)ackCount;
- (void)setResidentCount:;
@end
