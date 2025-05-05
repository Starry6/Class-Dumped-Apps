@interface AWEIMImageTransformerManager : NSObject
@property (nonatomic) YYMemoryCache cachedTransformer;
- (id)cachedTransformer;
- (void)setCachedTransformer:;
- (id)transformerWithImageSize:cornerRadius:;
- (id)transformerWithRoundCornerRatio:;
- (void).cxx_destruct;
+ (id)__keyForImageSize:cornerRadius:;
+ (id)__keyForRoundCornerRatio:;
+ (id)sharedManager;
@end
