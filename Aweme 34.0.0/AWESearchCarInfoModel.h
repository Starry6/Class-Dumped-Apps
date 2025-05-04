@interface AWESearchCarInfoModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString price;
@property (nonatomic) NSString carDescription;
@property (nonatomic) NSString rankList;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSArray carVideoList;
@property (nonatomic) NSString uri;
- (id)carDescription;
- (void)setCarDescription:;
- (id)rankList;
- (void)setRankList:;
- (id)carVideoList;
- (void)setCarVideoList:;
- (id)price;
- (void)setIconURL:;
- (id)iconURL;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setPrice:;
+ (id)iconURLJSONTransformer;
+ (id)carVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
