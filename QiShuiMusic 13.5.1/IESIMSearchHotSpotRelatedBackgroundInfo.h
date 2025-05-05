@interface IESIMSearchHotSpotRelatedBackgroundInfo : IESIMBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString type;
@property (nonatomic) NSString iconDark;
@property (nonatomic) NSString iconLight;
@property (nonatomic) NSString title;
@property (nonatomic) NSString url;
- (id)iconDark;
- (id)iconLight;
- (void)setIconDark:;
- (void)setIconLight:;
- (id)url;
- (id)id;
- (void)setType:;
- (void)setTitle:;
- (void)setUrl:;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (void)setId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
