@interface LynxFatImageProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)drawImage:toContext:;
- (id)initWithSize:padding:border:contentMode:;
- (id)processImage:;
- (id)cacheKey;
@end
