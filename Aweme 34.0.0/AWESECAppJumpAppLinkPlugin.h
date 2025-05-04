@interface AWESECAppJumpAppLinkPlugin : IWKPluginObject
@property (nonatomic) double lastCrossOriginTimestamp;
@property (nonatomic) NSURL lastCrossOriginPageURL;
@property (nonatomic) NSURL lastCrossOriginRequestURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidEnterBackground:;
- (BOOL)isCrossOriginWithPrevURL:nextURL:;
- (BOOL)applinkEnableWithParams:ruleList:;
- (double)lastCrossOriginTimestamp;
- (void)setLastCrossOriginTimestamp:;
- (id)lastCrossOriginPageURL;
- (void)setLastCrossOriginPageURL:;
- (id)lastCrossOriginRequestURL;
- (void)setLastCrossOriginRequestURL:;
- (id)webView:didCommitNavigation:;
- (id)init;
- (long long)priority;
- (void).cxx_destruct;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
+ (void)inject;
+ (id)shared;
@end
