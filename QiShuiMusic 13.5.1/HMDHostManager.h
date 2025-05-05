@interface HMDHostManager : NSObject
- (id)URLWithPath:provider:;
- (id)URLWithPath:tryIndex:provider:;
- (id)_URLWithHost:path:;
- (id)_hostWithList:atIndex:;
- (id)hostsWithProvider:;
+ (id)sharedManager;
@end
