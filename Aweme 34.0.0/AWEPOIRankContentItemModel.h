@interface AWEPOIRankContentItemModel : AWEPOIContentItemModel
@property (nonatomic) NSString brandID;
@property (nonatomic) NSString cardType;
@property (nonatomic) AWEURLModel poiRankScoreIconURL;
@property (nonatomic) BOOL isMain;
- (void)setIsMain:;
- (id)poiRankScoreIconURL;
- (void)setPoiRankScoreIconURL:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
- (BOOL)isMain;
- (id)brandID;
- (void)setBrandID:;
+ (id)poiRankScoreIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
