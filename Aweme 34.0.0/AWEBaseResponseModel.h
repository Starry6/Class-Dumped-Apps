@interface AWEBaseResponseModel : AWERootModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString requestID;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSDictionary logPassback;
- (id)logPassback;
- (void)setLogPassback:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)timestamp;
- (id)statusCode;
- (id)requestID;
- (void)setRequestID:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setMsg:;
- (id)msg;
+ (id)modelWithJSONDictionary:;
+ (id)JSONKeyPathsByPropertyKey;
@end
