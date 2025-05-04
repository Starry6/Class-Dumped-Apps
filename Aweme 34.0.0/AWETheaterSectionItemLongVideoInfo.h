@interface AWETheaterSectionItemLongVideoInfo : MTLModel
@property (nonatomic) AWELVideoAlbumInfoModel albumInfo;
@property (nonatomic) AWELVideoEpisodeInfoModel episodeInfo;
@property (nonatomic) AWETheaterSectionItemHighlightInfo highlightInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)albumInfo;
- (id)episodeInfo;
- (void)setAlbumInfo:;
- (void)setEpisodeInfo:;
- (void)setHighlightInfo:;
- (void).cxx_destruct;
- (id)highlightInfo;
+ (id)albumInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)highlightInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
