@interface AWEPOINoticeModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel avatarURL;
@property (nonatomic) IESIMPOIInfoModel poiInfo;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) q subtype;
@property (nonatomic) NSString schemaURL;
- (id)poiInfo;
- (id)avatarURL;
- (id)schemaURL;
- (void)setAvatarURL:;
- (void)setPoiInfo:;
- (void)setSchemaURL:;
- (long long)subtype;
- (id)content;
- (void)setContent:;
- (void)setSubtype:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
