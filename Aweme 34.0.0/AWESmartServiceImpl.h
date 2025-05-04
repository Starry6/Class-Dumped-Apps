@interface AWESmartServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getServiceByProtocol:;
- (id)getServiceFromProtocol:;
- (id)getServiceFromProtocolName:;
- (id)getCommonService:;
- (void)evaluateServiceLazyRegisterIfNeeded;
- (void)registerService:;
- (id)getService:;
+ (id)sharedInstance;
@end
