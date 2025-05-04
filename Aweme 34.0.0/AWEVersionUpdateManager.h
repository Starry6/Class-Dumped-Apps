@interface AWEVersionUpdateManager : NSObject
@property (nonatomic) AWEVersionUpdateNetworkModule networkModule;
@property (nonatomic) AWEVersionUpdateBadgeModule badgeModule;
@property (nonatomic) AWEVersionUpdateWorkflow workflow;
@property (nonatomic) NSString currentVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)badgeModule;
- (void)startVersionUpdateWorkflow:completion:;
- (id)networkModule;
- (void)workflowDidFinish:;
- (void)setNetworkModule:;
- (void)setBadgeModule:;
- (id)init;
- (id)currentVersion;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setWorkflow:;
- (id)workflow;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
