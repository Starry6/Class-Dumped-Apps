@interface AWEDiskCleanResourceTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)cacheTask;
+ (void)offlineVideoTask;
+ (void)execute;
@end
