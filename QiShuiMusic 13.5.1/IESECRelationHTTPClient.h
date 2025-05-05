@interface IESECRelationHTTPClient : NSObject
+ (void)preconnectHost:;
+ (id)getWithURLString:params:modelClass:completion:;
+ (id)getWithURLString:params:modelClass:completion:metricsBlock:;
+ (id)getWithURLString:params:requiredKeys:modelClass:completion:metricsBlock:;
+ (id)getWithURLString:verifiedParams:modelClass:completion:metricsBlock:;
+ (id)postWithURLString:params:modelClass:completion:;
+ (id)postWithURLString:params:modelClass:completion:metricsBlock:;
+ (id)postWithURLString:params:requiredKeys:modelClass:completion:metricsBlock:;
+ (id)postWithURLString:verifiedParams:modelClass:completion:metricsBlock:;
+ (void)preconnectRelationApiHosts;
+ (void)preconnectRelationPicHosts;
+ (void)trackParametersVerifyErrorWithURL:parameters:;
+ (id)verifyRequestParameters:invalidParameters:;
@end
