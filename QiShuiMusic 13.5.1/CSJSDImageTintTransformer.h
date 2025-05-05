@interface CSJSDImageTintTransformer : NSObject
@property (nonatomic) UIColor tintColor;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (id)tintColor;
- (void).cxx_destruct;
- (void)setTintColor:;
+ (id)transformerWithColor:;
@end
