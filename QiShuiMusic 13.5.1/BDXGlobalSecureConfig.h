@interface BDXGlobalSecureConfig : NSObject
@property (nonatomic) NSDictionary globalConfigMap;
- (id)globalConfigMap;
- (id)globalConfigWithBid:;
- (void)setGlobalConfigMap:;
- (void)updateDefaultGlobalConfig:bid:;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultKey;
+ (id)shareInstance;
@end
