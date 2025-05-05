@interface BDHMJSBErrorModel : NSObject
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString bridgeName;
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSString jssdkVersion;
@property (nonatomic) Q from;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) Q period;
- (id)webJSBErrorDict;
- (id)bridgeName;
- (id)errorMsg;
- (id)jssdkVersion;
- (id)lynxJSBErrorDict;
- (void)setBridgeName:;
- (void)setErrorMsg:;
- (void)setJssdkVersion:;
- (id)protocolVersion;
- (void)setProtocolVersion:;
- (long long)errorCode;
- (void)setNameSpace:;
- (id)nameSpace;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (unsigned long long)period;
- (void)setPeriod:;
- (unsigned long long)from;
- (void)setFrom:;
@end
