@interface AWEACCMultiStyleAlertImpl : NSProxy
@property (nonatomic) <ACCMultiStyleAlertProtocol> alertImpl;
@property (nonatomic) <ACCMultiStyleAlertBaseParamsProtocol> params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParamsProtocol:configBlock:;
- (void)setAlertImpl:;
- (id)alertImpl;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)alertMap;
@end
