@interface CFPrefsCloudSource : CFPrefsPlistSource
- (void)dealloc;
- (id)initWithDomain:user:byHost:containerPath:containingPreferences:;
- (BOOL)enabled;
- (int)alreadylocked_updateObservingRemoteChanges;
- (void)setConfigurationPath:;
- (void)mergeIntoDictionary:sourceDictionary:cloudKeyEvaluator:;
- (id)createSynchronizeMessage;
- (void)setEnabled:;
- (void)setStoreName:;
- (void)fullCloudSynchronizeWithCompletionHandler:;
@end
