@interface BDHMJSBFetchErrorModel : NSObject
@property (nonatomic) NSString method;
@property (nonatomic) NSString url;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) q bridgeCode;
@property (nonatomic) q httpCode;
@property (nonatomic) q requestErrorCode;
@property (nonatomic) NSString requestErrorMsg;
- (id)requestErrorMsg;
- (long long)bridgeCode;
- (id)errorMsg;
- (id)lynxJSBFetchErrorDict;
- (void)setBridgeCode:;
- (void)setErrorMsg:;
- (void)setRequestErrorMsg:;
- (id)webJSBFetchErrorDict;
- (id)url;
- (long long)errorCode;
- (id)method;
- (void)setHttpCode:;
- (void)setUrl:;
- (void)setRequestErrorCode:;
- (long long)httpCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (long long)requestErrorCode;
- (void)setMethod:;
@end
