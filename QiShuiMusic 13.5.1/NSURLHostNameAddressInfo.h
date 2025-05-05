@interface NSURLHostNameAddressInfo : NSObject
- (void)dealloc;
- (id)_initWithAddressInfo:;
- (id)addrinfo;
- (double)_timestamp;
+ (id)addressInfoForHost:;
+ (void)asyncResolveWithCallbackClient:;
@end
