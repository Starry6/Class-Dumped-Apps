@interface CSJSDImageBlurTransformer : NSObject
@property (nonatomic) double blurRadius;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (double)blurRadius;
- (void)setBlurRadius:;
+ (id)transformerWithRadius:;
@end
