@interface AWECodeGenWannaLynxCardModel : AWEBaseDataModel
@property (nonatomic) NSString modelID;
@property (nonatomic) NSString schema;
@property (nonatomic) q index;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString serverData;
@property (nonatomic) q cardType;
@property (nonatomic) double cardRatio;
- (id)serverData;
- (void)setServerData:;
- (double)cardRatio;
- (void)setCardRatio:;
- (void)setIndex:;
- (id)schema;
- (void)setModelID:;
- (long long)index;
- (id)modelID;
- (void)setSchema:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (long long)startTime;
- (long long)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
