@interface AWEAdNetworkRequester : NSObject
+ (void)postWithURLStringContentTypeJson:params:completionBlock:;
+ (void)getWithURLStringContentTypeJson:params:completionBlock:;
@end
