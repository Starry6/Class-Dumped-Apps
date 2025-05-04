@interface AWELunaMusicAnchorSongInfo : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString songId;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString iconURL;
- (void)setSongId:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)authorName;
- (void)setAuthorName:;
- (id)songId;
+ (id)JSONKeyPathsByPropertyKey;
@end
