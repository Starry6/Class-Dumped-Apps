@interface TencentIncrAuthLogic : NSObject
@property (nonatomic) TencentOAuth tencentOAuth;
@property (nonatomic) NSString reportAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tencentDidLogin;
- (id)initWithTencentOAuth:;
- (id)reportAction;
- (void)setReportAction:;
- (void)setTencentOAuth:;
- (void)tencentDidNotLogin:;
- (void)tencentDidNotNetWork;
- (id)tencentOAuth;
- (void).cxx_destruct;
@end
