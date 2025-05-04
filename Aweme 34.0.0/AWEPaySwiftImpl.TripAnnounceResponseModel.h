@interface AWEPaySwiftImpl.TripAnnounceResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString retStatus;
@property (nonatomic) NSDictionary taskResultMap;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)taskResultMap;
- (void)setTaskResultMap:;
- (long long)statusCode;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
