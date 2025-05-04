@interface AWEPadNetworkService : NSObject
+ (id)pad_getWithURLString:params:modelClass:monitorParams:completion:;
+ (id)pad_postWithURLString:params:modelClass:monitorParams:completion:;
@end
