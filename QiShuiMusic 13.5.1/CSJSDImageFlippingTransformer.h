@interface CSJSDImageFlippingTransformer : NSObject
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL vertical;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (void)setVertical:;
- (BOOL)vertical;
- (BOOL)horizontal;
- (void)setHorizontal:;
+ (id)transformerWithHorizontal:vertical:;
@end
