@interface CSJSDImageResizingTransformer : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q scaleMode;
@property (nonatomic) NSString transformerKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedImageWithImage:forKey:;
- (id)transformerKey;
- (void)setSize:;
- (id)size;
- (void)setScaleMode:;
- (unsigned long long)scaleMode;
+ (id)transformerWithSize:scaleMode:;
@end
