@interface AWESearchSynthesisManager : AWESearchBaseManager
@property (nonatomic) double startTime;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString apiParam;
@property (nonatomic) NSString searchJson;
@property (nonatomic) NSString gid;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)appendCommonParamsWithKeyword:;
- (id)apiParam;
- (void)setSearchJson:;
- (id)searchJson;
- (id)urlWithKeyword:enterFrom:;
- (void)setApiParam:;
- (id)gid;
- (void)setStartTime:;
- (void)setGid:;
- (void).cxx_destruct;
- (double)startTime;
+ (void)replaceKey:byKey:inDict:;
+ (id)secondJumpCommonParams;
+ (id)secondJumpParams:;
+ (id)secondJumpSchemaWithParams:url:;
@end
