@interface EAccountNetworkReqManager : NSObject
- (void)dealloc;
+ (void)JSCallClientPreLogin:block:;
+ (id)getNewLogEntity;
+ (id)getSocketRequestWithURL:;
+ (void)loadNetworkData:Param:httpMethod:bt:timeoutModel:responsBlack:;
+ (void)loadNetworkDataWithWWAN:Param:httpMethod:bt:timeoutModel:responsBlack:;
+ (void)preGetMobileRedirect:redirectReqId:redirectOrder:timeoutInterval:block:;
+ (void)requestNetDataWithWWAN:param:httpMethod:bt:timeoutModel:responsBlack:;
+ (id)requestSerialization:Param:httpMethod:timeoutInterval:;
@end
