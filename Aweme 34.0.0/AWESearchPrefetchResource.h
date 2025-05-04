@interface AWESearchPrefetchResource : AWEBaseApiModel
@property (nonatomic) NSArray prefetchImage;
@property (nonatomic) NSArray dynamicComponents;
- (id)prefetchImage;
- (void)setPrefetchImage:;
- (id)dynamicComponents;
- (void)setDynamicComponents:;
- (void).cxx_destruct;
+ (id)prefetchImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
