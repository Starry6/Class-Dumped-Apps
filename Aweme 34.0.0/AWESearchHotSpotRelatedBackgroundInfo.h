@interface AWESearchHotSpotRelatedBackgroundInfo : AWEBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString type;
@property (nonatomic) NSString iconDark;
@property (nonatomic) NSString iconLight;
@property (nonatomic) NSString title;
@property (nonatomic) NSString url;
- (id)iconLight;
- (void)setIconLight:;
- (id)iconDark;
- (void)setIconDark:;
- (void)setUrl:;
- (id)type;
- (id)id;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (void)setId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
