@interface AWEIMImageTransformerManager : NSObject
@property (nonatomic) YYMemoryCache cachedTransformer;
@property (nonatomic) YYMemoryCache cachedTransformObject;
- (id)transformerWithAlwaysOriginal;
- (id)transformerWithAlwaysTemplete;
- (id)reduceImageResolutionTransformerWithSize:rate:;
- (id)cachedTransformer;
- (id)cachedTransformObject;
- (id)transformerWithRoundCornerRatio:;
- (void)setCachedTransformer:;
- (void)setCachedTransformObject:;
- (id)init;
- (void).cxx_destruct;
+ (id)__keyForRoundCornerRatio:;
+ (id)__keyAlwaysTemplate;
+ (id)__keyForReduceImageResolutionTransformerWithSize:rate:;
+ (id)__keyForImageSize:cornerRadius:;
+ (id)sharedManager;
@end
