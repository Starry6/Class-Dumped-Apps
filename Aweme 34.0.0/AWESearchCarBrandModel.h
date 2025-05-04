@interface AWESearchCarBrandModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString uri;
@property (nonatomic) NSMutableArray carList;
@property (nonatomic) NSString infoSource;
@property (nonatomic) NSString hotTag;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (void)setInfoSource:;
- (void)setHotTag:;
- (id)carList;
- (void)setCarList:;
- (id)infoSource;
- (id)hotTag;
- (void)setIconURL:;
- (id)iconURL;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)iconURLJSONTransformer;
+ (id)aladdinIDJSONTransformer;
+ (id)carListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
