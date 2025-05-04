@interface AWEDiscoverDPlayletPerformanceEventRequestUnit : AWEDiscoverDPlayletPerformanceEventUnit
@property (nonatomic) NSString errorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSDictionary logPb;
- (void)setLogPb:;
- (id)logPb;
- (id)detail_imprId;
- (void)endWithError:apiModel:;
- (id)unitParams;
- (void)setErrorCode:;
- (id)errorCode;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)setRequestId:;
- (id)requestId;
- (void)setErrorMessage:;
@end
