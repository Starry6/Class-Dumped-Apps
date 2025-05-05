@interface IESECHTTPClient : NSObject
+ (void)p_findHeaderInfoAndSetToResult:;
+ (id)convertBlock:;
+ (BOOL)enableNetPerfMetrics;
+ (id)getWithURLString:params:modelClass:completion:;
+ (void)p_responseTrackWithHTTPRequest:extra:;
+ (id)postWithJSONSerializerURLString:params:modelClass:completion:;
+ (id)postWithURLString:params:modelClass:completion:;
+ (id)requestWithRequest:modelClass:completion:;
+ (id)requestWithRequest:modelClass:completion:metricsBlock:;
+ (id)requestWithRequest:modelClass:needSaaSHeaders:completion:;
+ (id)requestWithRequest:modelClass:needSaaSHeaders:completion:metricsBlock:;
+ (id)requestWithURLString:params:headers:usePOST:modelClass:completion:;
+ (id)requestWithURLString:params:headers:usePOST:modelClass:completion:metricsBlock:;
+ (id)requestWithURLString:params:needSaaSHeaders:usePOST:modelClass:completion:;
+ (id)requestWithURLString:params:needSaaSHeaders:usePOST:modelClass:completion:metricsBlock:;
+ (Class)serviceImpl;
+ (id)uploadFileData:URLString:progress:parameters:headers:completionHandler:fileType:;
+ (id)uploadFileData:needSaaSHeaders:URLString:progress:parameters:completionHandler:fileType:;
@end
