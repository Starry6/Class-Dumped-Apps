@interface AWEEcomSearchFeedPitayaResponse : MTLModel
@property (nonatomic) q code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString pitayaTraceId;
@property (nonatomic) NSDictionary ptyAlgInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pitayaTraceId;
- (void)setPitayaTraceId:;
- (id)ptyAlgInfo;
- (void)setPtyAlgInfo:;
- (long long)code;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
