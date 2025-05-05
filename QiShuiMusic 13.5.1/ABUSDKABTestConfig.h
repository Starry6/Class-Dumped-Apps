@interface ABUSDKABTestConfig : NSObject
@property (nonatomic) q ifUseNewLoadOpt;
@property (nonatomic) NSInteger eventBatchMode;
@property (nonatomic) NSDictionary abTest;
@property (nonatomic) NSDictionary joinAbTest;
@property (nonatomic) NSString csjAbVersion;
- (id)abuToDictionary;
- (long long)ifUseNewLoadOpt;
- (id)abTest;
- (id)abuToString;
- (id)csjAbVersion;
- (int)eventBatchMode;
- (id)joinAbTest;
- (void)parseAbParams;
- (void)setCsjAbVersion:;
- (void)setEventBatchMode:;
- (void)setIfUseNewLoadOpt:;
- (void)setJoinAbTest:;
- (id)initWithDict:;
- (void).cxx_destruct;
@end
