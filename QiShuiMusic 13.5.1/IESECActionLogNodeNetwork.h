@interface IESECActionLogNodeNetwork : IESECActionLogNodeBase
@property (nonatomic) NSString path;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString message;
@property (nonatomic) NSString logID;
@property (nonatomic) NSDictionary data;
- (id)path;
- (void)setStatusCode:;
- (long long)statusCode;
- (void)setMessage:;
- (id)data;
- (void)setPath:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)message;
- (void).cxx_destruct;
- (void)setData:;
- (id)info;
- (id)copyWithZone:;
- (id)logID;
- (id)requestParams;
- (void)setRequestParams:;
- (void)setLogID:;
@end
