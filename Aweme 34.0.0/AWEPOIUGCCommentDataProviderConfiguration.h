@interface AWEPOIUGCCommentDataProviderConfiguration : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasPrevious;
@property (nonatomic) NSString requestRawParams;
@property (nonatomic) q preloadStep;
- (void)setHasPrevious:;
- (void)setRequestRawParams:;
- (void)setPreloadStep:;
- (id)requestRawParams;
- (long long)preloadStep;
- (void)setContainerID:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (id)containerID;
- (void).cxx_destruct;
- (BOOL)hasPrevious;
@end
