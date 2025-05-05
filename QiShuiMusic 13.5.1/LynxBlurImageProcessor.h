@interface LynxBlurImageProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBlurRadius:;
- (id)processImage:;
- (id)cacheKey;
@end
