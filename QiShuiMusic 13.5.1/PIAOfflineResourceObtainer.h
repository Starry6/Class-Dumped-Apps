@interface PIAOfflineResourceObtainer : NSObject
+ (id)obtainResourceSyncWithURL:error:;
+ (void)obtainResourceWithURL:completion:;
@end
