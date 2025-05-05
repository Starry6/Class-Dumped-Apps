@interface LynxNinePatchImageProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCapInsets:;
- (id)initWithCapInsets:capInsetsScale:;
- (id)processImage:;
- (id)cacheKey;
@end
