@interface AWESearchHorizontalLoadmoreResponseModel : MTLModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray awemeListDic;
@property (nonatomic) NSString rawDataDiff;
@property (nonatomic) q statusCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setAwemeListDic:;
- (id)awemeListDic;
- (id)rawDataDiff;
- (void)setRawDataDiff:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
