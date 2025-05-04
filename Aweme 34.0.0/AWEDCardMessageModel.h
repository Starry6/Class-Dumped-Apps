@interface AWEDCardMessageModel : MTLModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray cardList;
@property (nonatomic) AWEAwemeModel dCard;
@property (nonatomic) NSString logID;
@property (nonatomic) double packEndTimeStamp;
@property (nonatomic) double serverTaskDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cardList;
- (void)setCardList:;
- (id)dCard;
- (void)setDCard:;
- (double)packEndTimeStamp;
- (void)setPackEndTimeStamp:;
- (double)serverTaskDuration;
- (void)setServerTaskDuration:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
