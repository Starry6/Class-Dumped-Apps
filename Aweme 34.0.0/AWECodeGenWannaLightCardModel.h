@interface AWECodeGenWannaLightCardModel : AWEBaseDataModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString feData;
@property (nonatomic) double cardRatio;
@property (nonatomic) q index;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString modelID;
- (id)feData;
- (void)setFeData:;
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
+ (id)JSONKeyPathsByPropertyKey;
@end
