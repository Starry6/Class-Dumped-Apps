@interface IESIMSendMessageMetricsModel : NSObject
@property (nonatomic) double msgStartTimestamp;
@property (nonatomic) double resourceStartSendTimestamp;
@property (nonatomic) q resourceEncodeDuration;
@property (nonatomic) q ressourceUploadDuration;
@property (nonatomic) double resourceSize;
@property (nonatomic) NSString resourceType;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) NSArray requestMetrics;
- (BOOL)fromCache;
- (double)msgStartTimestamp;
- (id)requestMetrics;
- (long long)resourceEncodeDuration;
- (double)resourceStartSendTimestamp;
- (long long)ressourceUploadDuration;
- (void)setFromCache:;
- (void)setMsgStartTimestamp:;
- (void)setRequestMetrics:;
- (void)setResourceEncodeDuration:;
- (void)setResourceSize:;
- (void)setResourceStartSendTimestamp:;
- (void)setRessourceUploadDuration:;
- (id)resourceType;
- (void)setResourceType:;
- (double)resourceSize;
- (void).cxx_destruct;
@end
