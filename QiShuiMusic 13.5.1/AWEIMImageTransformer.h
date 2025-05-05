@interface AWEIMImageTransformer : NSObject
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)imageSize;
- (id)initWithSize:cornerRadius:;
- (void)setImageSize:;
- (void)setImageCornerRadius:;
- (double)imageCornerRadius;
@end
