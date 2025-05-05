@interface HTSLiveApiSimpleResponse : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSString logID;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSNumber errNumber;
@property (nonatomic) @ data;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) @ jsonObj;
- (id)jsonObj;
- (id)decodeDataWithModelClass:error:;
- (id)decodeDataWithModelClass:;
- (id)errNumber;
- (BOOL)hasPrompts;
- (BOOL)hasServerTime;
- (id)initWithJsonObj:;
- (BOOL)isSuccessResponse;
- (void)setLogIDStr:;
- (void)setRequestIdStr:;
- (id)extra;
- (id)statusCode;
- (id)data;
- (id)requestID;
- (void).cxx_destruct;
- (id)serverTime;
- (void)setRequestID:;
- (id)prompts;
- (id)logID;
- (void)setLogID:;
@end
