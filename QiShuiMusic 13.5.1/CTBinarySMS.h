@interface CTBinarySMS : NSObject
@property (nonatomic) NSInteger portAddressingScheme;
@property (nonatomic) NSInteger srcPort;
@property (nonatomic) NSInteger dstPort;
@property (nonatomic) NSData payload;
@property (nonatomic) NSString destinationAddress;
@property (nonatomic) NSString smscAddress;
@property (nonatomic) CTXPCServiceSubscriptionContext context;
@property (nonatomic) NSInteger smsType;
- (id)destinationAddress;
- (id)payload;
- (id)init;
- (void)setPayload:;
- (id)context;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setDestinationAddress:;
- (void)setContext:;
- (int)smsType;
- (void)setSmsType:;
- (int)portAddressingScheme;
- (void)setPortAddressingScheme:;
- (int)srcPort;
- (void)setSrcPort:;
- (int)dstPort;
- (void)setDstPort:;
- (id)smscAddress;
- (void)setSmscAddress:;
@end
