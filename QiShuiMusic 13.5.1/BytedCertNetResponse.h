@interface BytedCertNetResponse : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSString logId;
- (id)initWithStatusCode:logId:;
- (id)logId;
- (void)setLogId:;
- (void)setStatusCode:;
- (long long)statusCode;
- (void).cxx_destruct;
+ (id)responseWithTTNetHttpResponse:;
@end
