@interface CSJSDImageFilterTransformer : NSObject
@property (nonatomic) CIFilter filter;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (id)filter;
- (void)setFilter:;
- (void).cxx_destruct;
+ (id)transformerWithFilter:;
@end
