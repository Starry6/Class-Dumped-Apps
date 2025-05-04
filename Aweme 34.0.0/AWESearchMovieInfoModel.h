@interface AWESearchMovieInfoModel : AWEBaseApiModel
@property (nonatomic) AWESearchMovieModel movie;
@property (nonatomic) AWEAwemeModel coverVideo;
@property (nonatomic) AWESearchMovieBannerModel banner;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor centerColor;
- (id)centerColor;
- (id)coverVideo;
- (void)setCoverVideo:;
- (id)banner;
- (void)setBanner:;
- (void).cxx_destruct;
- (id)movie;
- (void)setMovie:;
- (id)bgColor;
- (void)setBgColor:;
- (void)setCenterColor:;
+ (id)coverVideoJSONTransformer;
+ (id)bannerJSONTransformer;
+ (id)centerColorJSONTransformer;
+ (id)bgColorJSONTransformer;
+ (id)movieJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
