@interface WebDownload : NSURLDownload
- (id)init;
- (void)dealloc;
- (id)initWithRequest:delegate:;
- (id)_initWithLoadingConnection:request:response:delegate:proxy:;
- (id)_initWithRequest:delegate:directory:;
- (void)_setRealDelegate:;
@end
