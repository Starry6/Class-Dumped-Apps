@interface MLCEmbeddingDescriptor : NSObject
@property (nonatomic) NSNumber embeddingCount;
@property (nonatomic) NSNumber embeddingDimension;
@property (nonatomic) NSNumber paddingIndex;
@property (nonatomic) NSNumber maximumNorm;
@property (nonatomic) NSNumber pNorm;
@property (nonatomic) BOOL scalesGradientByFrequency;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)embeddingDimension;
- (id)paddingIndex;
- (id)initWithEmbeddingCount:embeddingDimension:paddingIndex:maximumNorm:pNorm:scalesGradientByFrequency:;
- (id)embeddingCount;
- (id)maximumNorm;
- (id)pNorm;
- (BOOL)scalesGradientByFrequency;
+ (id)descriptorWithEmbeddingCount:embeddingDimension:paddingIndex:maximumNorm:pNorm:scalesGradientByFrequency:;
+ (id)descriptorWithEmbeddingCount:embeddingDimension:;
@end
