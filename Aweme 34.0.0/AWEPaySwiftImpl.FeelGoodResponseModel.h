@interface AWEPaySwiftImpl.FeelGoodResponseModel : AWEBaseApiModel
@property (nonatomic) NSDictionary putResultMap;
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSString retStatus;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)putResultMap;
- (void)setPutResultMap:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
