@interface AWETeenNetworkService : NSObject
+ (id)postWithURLString:params:modelClass:completion:;
+ (id)postWithURLString:params:completion:;
+ (id)getWithURLString:params:completion:;
+ (id)getWithURLString:params:modelClass:completion:;
+ (id)getWithURLString:params:headerField:modelClass:timeout:completion:;
+ (id)postWithURLString:params:headerField:modelClass:completion:;
+ (id)getWithURLString:params:modelClass:timeout:responseSerializer:completion:;
+ (id)getWithURLString:params:headerField:modelClass:completion:;
+ (id)completionBlock:urlPath:extra:resQulityBlock:;
+ (id)getWithURLString:params:modelClass:completion:qualityExtra:qualityResBlock:;
+ (id)networkType;
@end
