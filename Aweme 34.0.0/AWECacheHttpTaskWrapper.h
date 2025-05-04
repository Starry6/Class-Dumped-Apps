@interface AWECacheHttpTaskWrapper : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) q state;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHttpTask:;
- (id)httpTask;
- (id)initWithCacheKey:;
- (void)continueNetworkTaskBlock:;
- (id)cacheKey;
- (void)resume;
- (void)cancel;
- (long long)state;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (void)suspend;
@end
