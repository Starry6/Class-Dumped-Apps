@interface AFImageCache : NSCache
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cacheImage:forRequest:;
- (id)cachedImageForRequest:;
@end
