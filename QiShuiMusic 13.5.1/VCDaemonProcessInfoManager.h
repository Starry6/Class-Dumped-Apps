@interface VCDaemonProcessInfoManager : NSObject
- (id)allocWithZone:;
- (id)init;
- (void)dealloc;
- (id)copyProcessInfo;
- (id)autorelease;
- (id)release;
- (id)retain;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
+ (id)copyProcessInfo;
+ (id)sharedManager;
@end
