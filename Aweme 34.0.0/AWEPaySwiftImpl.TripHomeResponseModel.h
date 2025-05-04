@interface AWEPaySwiftImpl.TripHomeResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSString retStatus;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray bottomTabs;
@property (nonatomic) _TtC15AWEPaySwiftImpl28TripTaxiServiceResponseModel taxiServiceData;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)bottomTabs;
- (void)setBottomTabs:;
- (id)taxiServiceData;
- (void)setTaxiServiceData:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)bottomTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
