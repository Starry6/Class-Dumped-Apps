@interface AWEGCPTencentBindServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isQQInstalled;
- (void)openWechatMiniProgramWithUserName:miniProgramPath:completion:;
- (unsigned long long)getWXMiniProgramType;
- (BOOL)isWechatInstalled;
- (void)openTencentMiniProgramWithPlatform:miniProgramID:miniProgramPath:completion:;
@end
