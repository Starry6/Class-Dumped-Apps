@interface IESIMAwemeTextExtraModel : IESIMBaseApiModel
@property (nonatomic) NSNumber start;
@property (nonatomic) NSNumber end;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString hashtagName;
@property (nonatomic) NSString hashtagId;
@property (nonatomic) NSString awemeId;
@property (nonatomic) q type;
@property (nonatomic) q followStatus;
@property (nonatomic) q subtype;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) NSNumber stickerID;
@property (nonatomic) IESIMURLModel stickerURL;
@property (nonatomic) Q stickerType;
@property (nonatomic) NSString liveData;
@property (nonatomic) NSDictionary liveDict;
- (id)awemeId;
- (void)setHashtagName:;
- (void)setStickerType:;
- (long long)followStatus;
- (id)hashtagId;
- (BOOL)isCommerce;
- (id)liveData;
- (id)liveDict;
- (void)setAwemeId:;
- (void)setFollowStatus:;
- (void)setHashtagId:;
- (void)setIsCommerce:;
- (void)setLiveData:;
- (void)setLiveDict:;
- (void)setStickerID:;
- (void)setStickerURL:;
- (id)stickerID;
- (id)stickerURL;
- (void)setEnd:;
- (long long)subtype;
- (void)setStart:;
- (id)end;
- (id)userID;
- (id)start;
- (void)setType:;
- (void)setSubtype:;
- (long long)type;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)hashtagName;
- (unsigned long long)stickerType;
+ (id)dictFromJsonString:;
+ (id)liveDictJSONTransformer;
+ (id)stickerURLJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
