@interface AliyunFaceAuthRPC : NSObject
@property (nonatomic) ZimGatewayForPop gatewayForPop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)zimNFCValidate:completionBlock:;
- (void)zimOCRIdentify:completionBlock:;
- (BOOL)dictionaryIsContainKey:key:;
- (id)gatewayForPop;
- (void)setGatewayForPop:;
- (void)zimInit:completionBlock:;
- (void)zimValidate:completionBlock:;
- (void).cxx_destruct;
@end
