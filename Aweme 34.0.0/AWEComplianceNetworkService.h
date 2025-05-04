@interface AWEComplianceNetworkService : NSObject
+ (id)postWithURLString:params:modelClass:completion:;
+ (id)postWithURLString:params:completion:;
+ (id)getWithURLString:params:modelClass:completion:;
+ (id)getWithURLString:params:headerField:modelClass:completion:;
+ (id)completionBlock:urlPath:extra:;
+ (id)networkType;
@end
