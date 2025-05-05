@interface CSJSDImageRoundCornerTransformer : NSObject
@property (nonatomic) double cornerRadius;
@property (nonatomic) Q corners;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (void)setBorderColor:;
- (id)borderColor;
- (double)borderWidth;
- (void)setBorderWidth:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (unsigned long long)corners;
- (void)setCorners:;
+ (id)transformerWithRadius:corners:borderWidth:borderColor:;
@end
