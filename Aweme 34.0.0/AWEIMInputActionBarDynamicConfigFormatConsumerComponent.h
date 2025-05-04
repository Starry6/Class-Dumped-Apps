@interface AWEIMInputActionBarDynamicConfigFormatConsumerComponent : AWEIMComponentBase
@property (nonatomic) BOOL shouldRefetchDynamicConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)didFetchFullDetailPeerUser:;
- (unsigned long long)configScene;
- (void)didFetchDynamicConfigWithResultConfig:;
- (unsigned long long)configDiffScene;
- (BOOL)canConfigScene;
- (void)setShouldRefetchDynamicConfig:;
- (BOOL)shouldRefetchDynamicConfig;
- (id)requestParams;
+ (BOOL)canCreateComponentWithContext:;
@end
