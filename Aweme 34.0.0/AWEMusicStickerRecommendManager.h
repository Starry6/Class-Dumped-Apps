@interface AWEMusicStickerRecommendManager : NSObject
@property (nonatomic) NSArray recommendMusicList;
@property (nonatomic) NSString zipURI;
- (id)zipURI;
- (void)setZipURI:;
- (id)recommendMusicList;
- (void)setRecommendMusicList:;
- (void)fetchRecommendMusicWithRepository:callback:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
