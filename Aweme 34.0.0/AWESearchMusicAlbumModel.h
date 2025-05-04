@interface AWESearchMusicAlbumModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString moreURL;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSArray musicList;
- (id)musicList;
- (void)setMusicList:;
- (void)setMoreURL:;
- (id)moreURL;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
