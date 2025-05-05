@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) NSString transactionIdentifier;
- (double)responseEndTime;
- (double)requestStartTime;
- (double)responseStartTime;
- (id)init;
- (void)setResponseStartTime:;
- (void)setResponseEndTime:;
- (void)setRequestStartTime:;
- (id)transactionIdentifier;
- (void)setTransactionIdentifier:;
- (void)addFieldsFromPurchaseResponse:;
@end
