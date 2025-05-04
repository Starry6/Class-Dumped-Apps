@interface AWEPluginSecurityImpl : NSObject
@property (nonatomic) NSArray validate_list;
@property (nonatomic) NSArray free_list;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preMatchRulesWithAppID:;
- (BOOL)checkBridgeCallableWithBridgeContext:;
- (id)validate_list;
- (id)free_list;
- (void)setValidate_list:;
- (void)setFree_list:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
