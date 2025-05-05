@interface GEOImageServiceRequester : NSObject
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)calculateFreeableSize;
- (BOOL)_finishRequest:;
- (void)startImageServiceRequest:auditToken:throttleToken:queue:finished:networkActivity:error:;
- (void)cancelImageServiceRequest:;
- (unsigned long long)shrinkDiskCacheToSize:;
+ (id)sharedRequester;
@end
