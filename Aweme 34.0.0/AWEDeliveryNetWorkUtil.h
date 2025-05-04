@interface AWEDeliveryNetWorkUtil : NSObject
+ (id)postURL:appendQuery:;
+ (id)messageFromResponse:;
+ (void)monitorServiceWithURLPath:model:error:;
+ (id)domain;
+ (BOOL)isNetworkConnected;
+ (BOOL)validateResponse:;
+ (id)urlForPath:;
@end
