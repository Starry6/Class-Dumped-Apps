@interface AWEIMConversationImageCacheComponent : AWEIMComponentBase
@property (nonatomic) YYMemoryCache coverImageCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)coverImageCache;
- (void)setCoverImageCache:;
- (void)setCoverImage:forKey:;
- (id)coverImageForKey:;
- (void).cxx_destruct;
@end
