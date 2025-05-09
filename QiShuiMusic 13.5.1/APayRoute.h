@interface APayRoute : NSObject
@property (nonatomic) NSString infoStr;
@property (nonatomic) NSString schemeStr;
@property (nonatomic) @? resultBlock;
@property (nonatomic) MQPWebService webService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)infoStr;
- (void)authByPortalWithInfo:;
- (void)authByWapWithInfo:ofUrl:;
- (void)authWithInfo:ofType:externInfo:result:;
- (void)callAlipay;
- (void)callAuth_v2;
- (void)callSafepay;
- (void)callWithInfo:scheme:config:externInfo:result:;
- (void)callWithNativeScheme:;
- (void)callWithWapUrl:andParams:needCheck:;
- (void)fetchWithScheme:;
- (id)schemeStr;
- (void)setInfoStr:;
- (void)setSchemeStr:;
- (void)webService:closeWithParams:;
- (void)webServiceAction:;
- (id)init;
- (id)resultBlock;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)webService;
- (void)setWebService:;
@end
