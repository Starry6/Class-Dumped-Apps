@interface IESLiveSaaSAnchorCenterRouter : NSObject
@property (nonatomic) IESLiveSaaSVerify verifyManager;
@property (nonatomic) NSString enterFrom;
- (id)enterFrom;
- (void)setEnterFrom:;
- (void)setVerifyManager:;
- (id)verifyManager;
- (void).cxx_destruct;
+ (void)openAnchorCenterWithCompletion:;
+ (void)loginWithDouyinIfNeededWithCompletion:;
+ (void)openAnchorCenterWithEnterFrom:completion:;
+ (void)realOpenAnchorCenter;
+ (id)urlByAppendingParamsToInnerURL:params:;
+ (void)verifyRealNameStatusWithCompletion:;
+ (id)sharedInstance;
@end
