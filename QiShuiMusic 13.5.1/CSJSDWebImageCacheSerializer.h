@interface CSJSDWebImageCacheSerializer : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheDataWithImage:originalData:imageURL:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)cacheSerializerWithBlock:;
@end
