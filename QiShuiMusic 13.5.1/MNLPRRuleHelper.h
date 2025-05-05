@interface MNLPRRuleHelper : NSObject
- (id)workQueue;
- (void)prefetchRulesForWaypoints:;
- (void)fetchRulesForWaypoints:forceUpdateManifest:forceUpdateRules:completionQueue:completion:;
- (void)_findResourceNamesForRegions:forceUpdate:asyncCompletion:;
- (void)_loadRules:asyncCompletion:;
@end
