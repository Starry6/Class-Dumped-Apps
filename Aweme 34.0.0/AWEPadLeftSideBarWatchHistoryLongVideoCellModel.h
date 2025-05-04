@interface AWEPadLeftSideBarWatchHistoryLongVideoCellModel : MTLModel
@property (nonatomic) NSString updateAt;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) Q type;
@property (nonatomic) NSString albumId;
@property (nonatomic) NSString seqTotal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)albumId;
- (void)setAlbumId:;
- (void)setUpdateAt:;
- (id)updateAt;
- (id)seqTotal;
- (void)setSeqTotal:;
- (id)schema;
- (void)setSchema:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
