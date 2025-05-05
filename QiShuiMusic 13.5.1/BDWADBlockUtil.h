@interface BDWADBlockUtil : NSObject
+ (id)adBlockRuleList;
+ (id)adBlockDomainWhiteList;
+ (id)adBlockResourceWithName:;
+ (BOOL)precompileEnable;
+ (id)precompiledAdblockStore;
+ (void)trackADBlockStatus;
@end
