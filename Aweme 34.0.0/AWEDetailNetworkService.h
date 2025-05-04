@interface AWEDetailNetworkService : NSObject
+ (void)clearNetworkRequestCacheForKey:;
+ (id)getWithURLString:params:modelClass:cacheStrategy:combineStrategy:completion:;
+ (id)combineSameGetRequestWithURLString:params:modelClass:cacheStrategy:completion:;
+ (id)disableCombineGetWithURLString:params:modelClass:cacheStrategy:completion:;
+ (id)cacheKeyFromURLString:params:;
@end
