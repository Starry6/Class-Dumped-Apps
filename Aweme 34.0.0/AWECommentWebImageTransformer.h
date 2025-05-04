@interface AWECommentWebImageTransformer : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)initWithSize:;
- (id)size;
- (void)setSize:;
@end
