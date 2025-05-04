@interface AWESecurityBridgePluginImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkBridgeCallableWithBridgeContext:;
- (id)convertFromBDPContext:;
- (void)preMatchRulesWithAppID:path:;
- (id)bridgeValidateList;
- (id)bridgeFreeList;
+ (id)sharedPlugin;
@end
