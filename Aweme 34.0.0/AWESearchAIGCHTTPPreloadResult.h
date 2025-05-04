@interface AWESearchAIGCHTTPPreloadResult : NSObject
@property (nonatomic) NSString jsonData;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (void)setErrorCode:;
- (long long)errorCode;
- (id)jsonData;
- (void).cxx_destruct;
- (void)setJsonData:;
@end
