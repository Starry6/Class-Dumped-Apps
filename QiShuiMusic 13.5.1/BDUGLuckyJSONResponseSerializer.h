@interface BDUGLuckyJSONResponseSerializer : TTHTTPJSONResponseSerializerBase
@property (nonatomic) NSMutableIndexSet acceptableStatusCodes;
@property (nonatomic) NSMutableIndexSet serverHangStatusCodes;
- (id)p_getValueInDictionary:withKey:;
- (id)acceptableStatusCodes;
- (void)recordResponseServerInfoWithResponse:;
- (id)responseModelWithJSonObj:response:responseStatus:;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (long long)responseStatusWithCode:;
- (id)serverHangStatusCodes;
- (void)setAcceptableStatusCodes:;
- (void)setServerHangStatusCodes:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerResponseSerializerBlock:;
+ (void)removeResponseSerializerBlock:;
+ (id)serializer;
@end
