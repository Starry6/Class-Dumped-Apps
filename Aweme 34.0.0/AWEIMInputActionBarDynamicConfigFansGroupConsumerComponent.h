@interface AWEIMInputActionBarDynamicConfigFansGroupConsumerComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didFetchFullDetailGroupOwnerUser:;
- (unsigned long long)configScene;
- (void)didFetchDynamicConfigWithResultConfig:;
- (unsigned long long)configDiffScene;
- (BOOL)canConfigScene;
- (id)requestParams;
+ (BOOL)canCreateComponentWithContext:;
@end
