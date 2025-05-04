@interface AWEAdImagesListConfiguration : NSObject
@property (nonatomic) NSArray imageList;
@property (nonatomic) NSString title;
@property (nonatomic) q defaultIndex;
@property (nonatomic) BOOL isLiked;
@property (nonatomic) NSNumber likeCount;
@property (nonatomic) @? likeClickAction;
- (void)setLikeCount:;
- (void)setImageList:;
- (id)likeClickAction;
- (void)setLikeClickAction:;
- (BOOL)isLiked;
- (void)setIsLiked:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)defaultIndex;
- (void)setDefaultIndex:;
- (id)likeCount;
- (id)imageList;
@end
