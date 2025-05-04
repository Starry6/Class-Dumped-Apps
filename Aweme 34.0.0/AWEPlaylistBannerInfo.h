@interface AWEPlaylistBannerInfo : AWEBaseApiModel
@property (nonatomic) NSString bannerID;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel bannerURL;
@property (nonatomic) NSString schema;
- (void)setBannerID:;
- (id)bannerURL;
- (void)setBannerURL:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)bannerID;
+ (id)bannerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
