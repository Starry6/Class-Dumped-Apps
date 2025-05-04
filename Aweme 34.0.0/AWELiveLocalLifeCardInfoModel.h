@interface AWELiveLocalLifeCardInfoModel : MTLModel
@property (nonatomic) AWELiveLocalLifeCardRawDataModel cardRawInfo;
@property (nonatomic) AWELiveLocalLifeControlDataModel controlInfo;
@property (nonatomic) AWELiveLocalLifeStickerDataModel stickerData;
@property (nonatomic) NSString cardType;
@property (nonatomic) NSDictionary originCardData;
@property (nonatomic) NSDictionary originControlData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)controlInfo;
- (void)setControlInfo:;
- (id)originCardData;
- (void)setStickerData:;
- (id)stickerData;
- (id)cardRawInfo;
- (id)originControlData;
- (void)setCardRawInfo:;
- (void)setOriginCardData:;
- (void)setOriginControlData:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
+ (id)cardRawInfoJSONTransformer;
+ (id)controlInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
