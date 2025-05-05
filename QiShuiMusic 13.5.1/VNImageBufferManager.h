@interface VNImageBufferManager : NSObject
- (id)init;
- (void)dealloc;
- (id)sharedCIContextWithOptions:;
- (void).cxx_destruct;
- (void)purgeAllCaches;
+ (id)manager;
@end
