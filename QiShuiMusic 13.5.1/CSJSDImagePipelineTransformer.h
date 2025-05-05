@interface CSJSDImagePipelineTransformer : NSObject
@property (nonatomic) NSArray transformers;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTransformerKey:;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (id)transformers;
- (void).cxx_destruct;
- (void)setTransformers:;
+ (id)cacheKeyForTransformers:;
+ (id)transformerWithTransformers:;
@end
