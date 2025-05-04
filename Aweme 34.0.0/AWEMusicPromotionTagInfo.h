@interface AWEMusicPromotionTagInfo : AWEBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel lightModeImageUrl;
@property (nonatomic) AWEURLModel darkModeImageUrl;
@property (nonatomic) double imageRatio;
@property (nonatomic) NSString metaSongID;
@property (nonatomic) NSString activityID;
- (id)lightModeImageUrl;
- (void)setLightModeImageUrl:;
- (id)darkModeImageUrl;
- (void)setDarkModeImageUrl:;
- (double)imageRatio;
- (void)setImageRatio:;
- (id)metaSongID;
- (void)setMetaSongID:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
