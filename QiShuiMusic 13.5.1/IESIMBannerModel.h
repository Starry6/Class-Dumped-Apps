@interface IESIMBannerModel : IESIMBaseApiModel
@property (nonatomic) NSString bannerID;
@property (nonatomic) NSString title;
@property (nonatomic) IESIMURLModel bannerURL;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString schema;
@property (nonatomic) IESIMBanneraAdDataModel adData;
@property (nonatomic) BOOL isClickable;
- (void)setIsClickable:;
- (id)bannerURL;
- (void)setBannerID:;
- (void)setBannerURL:;
- (id)schema;
- (id)tagID;
- (void)setWidth:;
- (void)setTitle:;
- (void)setSchema:;
- (id)height;
- (id)width;
- (void)setAdData:;
- (id)title;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)adData;
- (BOOL)isClickable;
- (id)bannerID;
+ (id)adDataJSONTransformer;
+ (id)bannerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
