@interface BDUGLuckyPreCongfig : BDUGLuckyBDModel
@property (nonatomic) q preloadFeedDelay;
@property (nonatomic) NSArray preloadPages;
@property (nonatomic) NSArray prefetchPages;
- (id)prefetchPages;
- (long long)preloadFeedDelay;
- (id)preloadPages;
- (void)setPrefetchPages:;
- (void)setPreloadFeedDelay:;
- (void)setPreloadPages:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
