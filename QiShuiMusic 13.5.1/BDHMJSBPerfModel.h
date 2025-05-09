@interface BDHMJSBPerfModel : NSObject
@property (nonatomic) NSString bridgeName;
@property (nonatomic) NSString statusDesc;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSString containerId;
@property (nonatomic) NSString jssdkVersion;
@property (nonatomic) double invokeTS;
@property (nonatomic) double callbackTS;
@property (nonatomic) double fireEventTS;
@property (nonatomic) double costTime;
- (id)lynxJSBPerfDict;
- (void)setFireEventTS:;
- (id)bridgeName;
- (double)callbackTS;
- (double)costTime;
- (double)fireEventTS;
- (double)invokeTS;
- (id)jssdkVersion;
- (void)setBridgeName:;
- (void)setCallbackTS:;
- (void)setCostTime:;
- (void)setInvokeTS:;
- (void)setJssdkVersion:;
- (void)setStatusDesc:;
- (id)statusDesc;
- (id)webJSBPerfDict;
- (id)protocolVersion;
- (void)setProtocolVersion:;
- (void)setStatusCode:;
- (id)containerId;
- (long long)statusCode;
- (void)setNameSpace:;
- (id)nameSpace;
- (void)setContainerId:;
- (void).cxx_destruct;
@end
