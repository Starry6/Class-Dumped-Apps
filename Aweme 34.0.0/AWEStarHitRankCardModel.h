@interface AWEStarHitRankCardModel : AWEBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString schemaDesc;
@property (nonatomic) NSString title;
@property (nonatomic) NSString activityDesc;
@property (nonatomic) NSArray activityIcons;
@property (nonatomic) NSString feedButtonTitle;
@property (nonatomic) AWEURLModel buttonBgImage;
- (id)buttonBgImage;
- (void)setButtonBgImage:;
- (id)schemaDesc;
- (void)setSchemaDesc:;
- (id)activityDesc;
- (void)setActivityDesc:;
- (id)activityIcons;
- (void)setActivityIcons:;
- (id)feedButtonTitle;
- (void)setFeedButtonTitle:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)activityIconsJSONTransformer;
+ (id)buttonBgImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
