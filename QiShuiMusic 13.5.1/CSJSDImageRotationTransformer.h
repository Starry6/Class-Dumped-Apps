@interface CSJSDImageRotationTransformer : NSObject
@property (nonatomic) double angle;
@property (nonatomic) BOOL fitSize;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fitSize;
- (void)setFitSize:;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (double)angle;
- (void)setAngle:;
+ (id)transformerWithAngle:fitSize:;
@end
