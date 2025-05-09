@interface AWEPOITagRateModel : MTLModel
@property (nonatomic) NSString rateId;
@property (nonatomic) AWEPOIInfoModel poiInfo;
@property (nonatomic) Q sourceType;
@property (nonatomic) NSString sourceId;
@property (nonatomic) AWEPOITagRateGradeModel rateGrade;
@property (nonatomic) NSString rateContent;
@property (nonatomic) q createMsTime;
@property (nonatomic) q diggCount;
@property (nonatomic) q userDigged;
@property (nonatomic) AWEPOISimpleUserInfo userInfo;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) AWEPOITagRateOrderModel orderInfo;
@property (nonatomic) NSString userRelationTag;
@property (nonatomic) q awemeExtend;
@property (nonatomic) NSString labRateTag;
@property (nonatomic) NSString sourceText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)diggCount;
- (id)poiInfo;
- (long long)userDigged;
- (id)awemeInfo;
- (void)setUserDigged:;
- (void)setDiggCount:;
- (void)setAwemeInfo:;
- (id)rateGrade;
- (id)rateId;
- (id)orderInfo;
- (void)setOrderInfo:;
- (void)setPoiInfo:;
- (void)setRateId:;
- (id)rateContent;
- (void)setRateContent:;
- (void)setRateGrade:;
- (long long)createMsTime;
- (void)setCreateMsTime:;
- (id)userRelationTag;
- (void)setUserRelationTag:;
- (long long)awemeExtend;
- (void)setAwemeExtend:;
- (id)labRateTag;
- (void)setLabRateTag:;
- (void)setSourceType:;
- (unsigned long long)sourceType;
- (void)setSourceId:;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (id)sourceId;
- (id)sourceText;
- (void)setSourceText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
