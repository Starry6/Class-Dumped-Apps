@interface IESIMStarHitRankCardModel : IESIMBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString schemaDesc;
@property (nonatomic) NSString title;
@property (nonatomic) NSString activityDesc;
@property (nonatomic) NSArray activityIcons;
@property (nonatomic) NSString feedButtonTitle;
@property (nonatomic) IESIMURLModel buttonBgImage;
- (id)feedButtonTitle;
- (id)activityDesc;
- (id)activityIcons;
- (id)buttonBgImage;
- (id)schemaDesc;
- (void)setActivityDesc:;
- (void)setActivityIcons:;
- (void)setButtonBgImage:;
- (void)setFeedButtonTitle:;
- (void)setSchemaDesc:;
- (id)schema;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void).cxx_destruct;
+ (id)activityIconsJSONTransformer;
+ (id)buttonBgImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
