@interface IESECGoodsDetailGoodsVideoModel : MTLModel
@property (nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel author;
@property (nonatomic) IESECHeadVideoModel video;
@property (nonatomic) IESECURLModel videoCover;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString likedCount;
@property (nonatomic) NSString commentCount;
@property (nonatomic) NSString openLink;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)likedCount;
- (void)setLikedCount:;
- (void)setOpenLink:;
- (void)setVideoCover:;
- (id)videoCover;
- (id)desc;
- (void)setDesc:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setVideo:;
- (id)video;
- (id)commentCount;
- (id)openLink;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
