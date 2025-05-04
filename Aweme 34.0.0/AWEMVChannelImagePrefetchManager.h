@interface AWEMVChannelImagePrefetchManager : NSObject
@property (nonatomic) BOOL allowPrefetch;
@property (nonatomic) Q prefetchImageAvoidLoadVideoOptions;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSMutableArray cancelledPrefetchList;
- (id)prefetchWithURLs:cacheName:category:options:;
- (id)initWithPrivate;
- (BOOL)allowPrefetch;
- (void)setAllowPrefetch:;
- (void)asyncCancelPrefetch;
- (void)asyncResumePrefetch;
- (void)_cancelPrefetch;
- (unsigned long long)prefetchImageAvoidLoadVideoOptions;
- (id)cancelledPrefetchList;
- (void)_resumePrefetch;
- (void)updateAllowPrefetch:;
- (id)prefetchWithURL:cacheName:category:options:;
- (id)prefetchWithURLs:category:options:;
- (id)serialQueue;
- (void).cxx_destruct;
+ (id)prefetchsWithCategoryArray:;
+ (void)cancelPrefetchsWithCategoryArray:async:;
+ (void)cancelRequestsWithCategory:async:;
+ (id)shared;
@end
