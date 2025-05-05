@interface IESLiveSaaSPBTraceTimeMetric : GPBMessage
@property (nonatomic) q opTimestamp;
@property (nonatomic) q producerDuration;
@property (nonatomic) q consumerDuration;
@property (nonatomic) q msgSendTimestamp;
+ (id)descriptor;
@end
