@interface AWESearchMusicAladdinModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray musicAlbum;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (void)setMusicAlbum:;
- (id)musicAlbum;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)aladdinIDJSONTransformer;
+ (id)musicAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
