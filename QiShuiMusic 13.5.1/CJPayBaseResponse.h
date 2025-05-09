@interface CJPayBaseResponse : JSONModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString status;
@property (nonatomic) NSString errorType;
@property (nonatomic) NSString typeContent;
@property (nonatomic) NSString version;
@property (nonatomic) NSString sign;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) double responseDuration;
- (void)setTypeContent:;
- (BOOL)isNeedThrottle;
- (void)setSign:;
- (id)sign;
- (id)typeContent;
- (BOOL)isSuccess;
- (void)setStatus:;
- (void)setIsFromCache:;
- (BOOL)isFromCache;
- (void)setVersion:;
- (id)version;
- (id)initWithDictionary:error:;
- (id)code;
- (void).cxx_destruct;
- (double)responseDuration;
- (id)status;
- (void)setCode:;
- (id)errorType;
- (void)setResponseDuration:;
- (void)setErrorType:;
- (id)msg;
- (void)setMsg:;
+ (id)basicDict;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
