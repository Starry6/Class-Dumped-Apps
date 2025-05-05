@interface BDImageConfigUtil : NSObject
+ (BOOL)verify:signature:withPublicKey:;
+ (id)addPublicKey:;
+ (id)bdImageJSONRepresentation:;
+ (id)commonParametersWithConfig:;
+ (id)decodeDomain:;
+ (id)decodeWithBase64Str:;
+ (id)defaultHeaderFieldWithAppID:;
+ (void)networkAsyncRequestForURL:headers:method:queue:callback:;
+ (void)networkAsyncRequestV2ForURL:headers:method:queue:mappingClass:callback:;
+ (id)responseData:data:error:;
+ (id)responseData:data:error:mappingClass:;
+ (id)URLQueryAllowedCharacterSet;
+ (id)sha256:;
@end
