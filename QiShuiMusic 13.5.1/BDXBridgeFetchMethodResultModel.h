@interface BDXBridgeFetchMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString response;
@property (nonatomic) q status;
@property (nonatomic) NSNumber code;
@property (nonatomic) NSString beginReqNetTime;
@property (nonatomic) NSDictionary header;
- (id)beginReqNetTime;
- (void)setBeginReqNetTime:;
- (void)setHeader:;
- (void)setStatus:;
- (id)code;
- (id)response;
- (void).cxx_destruct;
- (long long)status;
- (id)header;
- (void)setResponse:;
- (void)setCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
