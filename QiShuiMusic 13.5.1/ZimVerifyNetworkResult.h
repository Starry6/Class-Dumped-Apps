@interface ZimVerifyNetworkResult : NSObject
@property (nonatomic) ZimAliCloudValidateResponse ResultObject;
@property (nonatomic) NSString RequestId;
@property (nonatomic) NSString Code;
- (id)Code;
- (id)RequestId;
- (id)ResultObject;
- (id)init;
- (void)setResultObject:;
- (void).cxx_destruct;
- (void)setCode:;
- (void)setRequestId:;
@end
