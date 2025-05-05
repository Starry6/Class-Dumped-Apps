@interface ZimNetworkResult : NSObject
@property (nonatomic) ZimAliCloudInitResponse ResultObject;
@property (nonatomic) NSString RequestId;
@property (nonatomic) NSString Code;
@property (nonatomic) NSString Success;
@property (nonatomic) NSString Message;
- (id)Message;
- (id)Code;
- (id)Success;
- (id)RequestId;
- (id)ResultObject;
- (id)init;
- (void)setResultObject:;
- (void)setMessage:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (void)setCode:;
- (void)setRequestId:;
@end
