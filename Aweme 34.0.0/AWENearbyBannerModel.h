@interface AWENearbyBannerModel : AWEBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel pictureURL;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
- (id)activityName;
- (id)pictureURL;
- (void)setPictureURL:;
- (void)setActivityName:;
+ (id)pictureURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
