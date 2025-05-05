@interface DTFAuthRPC : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getOverRateLimitResultWithDict:;
- (void)zimOCRIdentify:completionBlock:;
- (void)checkSMSCode:completionBlock:;
- (void)request:withConfig:completionBlock:;
- (void)requestSMSVerifyCode:completionBlock:;
- (void)zimInit:completionBlock:;
- (void)zimValidate:completionBlock:;
@end
