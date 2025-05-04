@interface AWEPOIBDUGTrackerResponseModel : AWEBaseApiModel
@property (nonatomic) q httpCode;
@property (nonatomic) NSDictionary logData;
@property (nonatomic) NSString message;
- (long long)httpCode;
- (void)setHttpCode:;
- (id)logData;
- (id)message;
- (void)setLogData:;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
