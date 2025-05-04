@interface AWEGuidelunaPopViewSongModel : AWEBaseApiModel
@property (nonatomic) NSString lunaSongId;
@property (nonatomic) NSArray songCoverUrlArray;
@property (nonatomic) NSString songTitle;
@property (nonatomic) NSArray songAuthors;
@property (nonatomic) NSString albumTitle;
@property (nonatomic) Q songStrategy;
@property (nonatomic) NSString descriptionContent;
- (void)setLunaSongId:;
- (void)setSongStrategy:;
- (void)setSongCoverUrlArray:;
- (void)setDescriptionContent:;
- (id)lunaSongId;
- (id)songCoverUrlArray;
- (id)songAuthors;
- (void)setSongAuthors:;
- (unsigned long long)songStrategy;
- (id)descriptionContent;
- (id)similarSongType;
- (void).cxx_destruct;
- (void)setSongTitle:;
- (id)songTitle;
- (id)albumTitle;
- (void)setAlbumTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
