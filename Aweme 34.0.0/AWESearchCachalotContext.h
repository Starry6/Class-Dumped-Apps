@interface AWESearchCachalotContext : CachalotContext
@property (nonatomic) AWETrackerContext trackerContext;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL isRefresh;
@property (nonatomic) Q bindDataCount;
- (void)setTrackerContext:;
- (id)trackerContext;
- (unsigned long long)bindDataCount;
- (void)setBindDataCount:;
- (BOOL)isRefresh;
- (void).cxx_destruct;
- (id)params;
- (id)copyWithZone:;
- (void)setIsRefresh:;
- (void)setParams:;
@end
