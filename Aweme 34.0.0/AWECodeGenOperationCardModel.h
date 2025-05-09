@interface AWECodeGenOperationCardModel : AWEBaseDataModel
@property (nonatomic) NSString lightPictureUrl;
@property (nonatomic) NSString darkPictureUrl;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) double cardRatio;
@property (nonatomic) NSString modelID;
@property (nonatomic) NSString name;
@property (nonatomic) q index;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString tag;
- (double)cardRatio;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (void)setCardRatio:;
- (id)lightPictureUrl;
- (void)setLightPictureUrl:;
- (id)darkPictureUrl;
- (void)setDarkPictureUrl:;
- (void)setIndex:;
- (void)setModelID:;
- (long long)index;
- (id)tag;
- (id)modelID;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void)setTag:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
