@interface AWELunaMusicianSongDetailModel : AWEBaseApiModel
@property (nonatomic) NSString songTitle;
@property (nonatomic) NSString songDescription;
@property (nonatomic) NSArray artists;
- (id)songDescription;
- (void)setSongDescription:;
- (void).cxx_destruct;
- (void)setSongTitle:;
- (id)songTitle;
- (id)artists;
- (void)setArtists:;
+ (id)JSONKeyPathsByPropertyKey;
@end
