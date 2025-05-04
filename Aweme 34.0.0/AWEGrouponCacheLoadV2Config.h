@interface AWEGrouponCacheLoadV2Config : NSObject
@property (nonatomic) BOOL useTransformerCache;
@property (nonatomic) BOOL useFeedCache;
- (void)setUseFeedCache:;
- (void)setUseTransformerCache:;
- (BOOL)useFeedCache;
- (BOOL)useTransformerCache;
- (id)init;
@end
