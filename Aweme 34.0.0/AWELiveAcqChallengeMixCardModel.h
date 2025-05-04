@interface AWELiveAcqChallengeMixCardModel : AWEBaseApiModel
@property (nonatomic) AWELiveAcqChallengeLiveCard roomInfo;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q cardType;
@property (nonatomic) NSString searchResultID;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)roomInfo;
- (id)searchResultID;
- (void)setSearchResultID:;
- (void)setRoomInfo:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
+ (id)awemeModelJSONTransformer;
+ (id)roomInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
