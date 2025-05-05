@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:fromValue:toValue:;
- (void)_notifyObserversOfChangeFromValuesForKeys:toValuesForKeys:;
- (void)handleChangeNotificationForDomainIdentifier:isRemote:;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:toDictionary:;
@end
