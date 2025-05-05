@interface CSJSDWebImageCacheKeyFilter : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheKeyForURL:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)cacheKeyFilterWithBlock:;
@end
