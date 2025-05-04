@interface AWEGrouponTaskSearchTextRefreshByLoadMore : AWEGrouponBaseTask
@property (nonatomic) @? executor;
@property (nonatomic) q limitCount;
- (void)executeWithContext:;
- (long long)limitCount;
- (id)executor;
- (void).cxx_destruct;
- (id)triggerType;
- (id)initWithExecutor:;
- (void)setLimitCount:;
- (void)setExecutor:;
+ (void)_aweLazyRegisterStaticLoad;
@end
