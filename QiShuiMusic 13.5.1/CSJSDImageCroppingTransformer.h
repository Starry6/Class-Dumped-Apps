@interface CSJSDImageCroppingTransformer : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (id)rect;
- (void)setRect:;
+ (id)transformerWithRect:;
@end
