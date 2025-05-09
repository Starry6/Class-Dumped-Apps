@interface AWEGeneralFilmTVEpisodeInfoModel : AWEBaseApiModel
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString definition;
@property (nonatomic) NSString desc;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString episodeID;
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber onlineTime;
@property (nonatomic) NSNumber opening;
@property (nonatomic) q paymentStatus;
@property (nonatomic) NSString paymentString;
@property (nonatomic) NSString schema;
@property (nonatomic) q schemaType;
@property (nonatomic) NSNumber episodeNumber;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString title;
@property (nonatomic) NSString playURL;
@property (nonatomic) NSString videoID;
@property (nonatomic) NSString episodeTagIconUrl;
@property (nonatomic) BOOL isVip;
@property (nonatomic) BOOL isNew;
@property (nonatomic) q actionType;
@property (nonatomic) AWEGeneralFilmTelevisionTagModel longVideoTag;
@property (nonatomic) AWEGeneralFilmTelevisionTagModel longVideoLightTag;
- (void)setSchemaType:;
- (void)setAlbumID:;
- (BOOL)isVip;
- (void)setIsVip:;
- (void)setOpening:;
- (void)setEpisodeID:;
- (id)paymentString;
- (void)setPaymentString:;
- (id)longVideoTag;
- (void)setLongVideoTag:;
- (id)longVideoLightTag;
- (void)setLongVideoLightTag:;
- (id)onlineTime;
- (void)setOnlineTime:;
- (id)episodeTagIconUrl;
- (void)setEpisodeTagIconUrl:;
- (id)schema;
- (id)definition;
- (long long)actionType;
- (void)setActionType:;
- (long long)schemaType;
- (BOOL)isNew;
- (void)setSchema:;
- (void)setDuration:;
- (id)episodeNumber;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setEpisodeNumber:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)duration;
- (id)title;
- (void)setName:;
- (id)name;
- (void)setTitle:;
- (void)setIsNew:;
- (long long)paymentStatus;
- (void)setPaymentStatus:;
- (id)albumID;
- (id)videoID;
- (void)setVideoID:;
- (id)opening;
- (id)playURL;
- (void)setDefinition:;
- (void)setPlayURL:;
- (id)episodeID;
+ (id)isEqualBlock;
+ (id)longVideoTagJSONTransformer;
+ (id)longVideoLightTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
