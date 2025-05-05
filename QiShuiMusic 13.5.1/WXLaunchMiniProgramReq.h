@interface WXLaunchMiniProgramReq : BaseReq
@property (nonatomic) NSString userName;
@property (nonatomic) NSString path;
@property (nonatomic) Q miniProgramType;
@property (nonatomic) NSString extMsg;
@property (nonatomic) NSDictionary extDic;
- (unsigned long long)miniProgramType;
- (id)extDic;
- (id)extMsg;
- (void)setExtDic:;
- (void)setExtMsg:;
- (void)setMiniProgramType:;
- (id)path;
- (id)userName;
- (void)setPath:;
- (void)setUserName:;
- (void).cxx_destruct;
+ (id)object;
@end
