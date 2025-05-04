@interface AWEGDCacheRenderConfigModel : NSObject
@property (nonatomic) NSInteger validTime;
@property (nonatomic) NSArray checkRouterKeys;
@property (nonatomic) NSArray allowCacheComponentsArray;
@property (nonatomic) BOOL isRenderCache;
@property (nonatomic) BOOL isPreRequest;
@property (nonatomic) NSArray blackFilterDoorRule;
- (int)validTime;
- (void)setValidTime:;
- (BOOL)isPreRequest;
- (void)setIsPreRequest:;
- (id)blackFilterDoorRule;
- (void)setCheckRouterKeys:;
- (void)setAllowCacheComponentsArray:;
- (void)setIsRenderCache:;
- (id)checkRouterKeys;
- (id)allowCacheComponentsArray;
- (BOOL)isRenderCache;
- (void)setBlackFilterDoorRule:;
- (void).cxx_destruct;
+ (id)defaultConfigModel;
@end
