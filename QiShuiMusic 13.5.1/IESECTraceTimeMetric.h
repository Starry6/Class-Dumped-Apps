@interface IESECTraceTimeMetric : MTLModel
@property (nonatomic) q opTimestamp;
@property (nonatomic) q producerDuration;
@property (nonatomic) q consumerDuration;
@property (nonatomic) q msgSendTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpTimestamp:;
- (long long)consumerDuration;
- (long long)msgSendTimestamp;
- (long long)opTimestamp;
- (long long)producerDuration;
- (void)setConsumerDuration:;
- (void)setMsgSendTimestamp:;
- (void)setProducerDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
