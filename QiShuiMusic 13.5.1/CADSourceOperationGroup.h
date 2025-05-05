@interface CADSourceOperationGroup : CADOperationGroup
- (void)CADSourceRemoveExchangeDelegateWithID:reply:;
- (void)CADSourceUpdateGrantedDelegate:action:sourceID:reply:;
- (int)_tryPerformBlockWithSourceID:forAction:entityType:withBlock:;
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:reply:;
- (void)CADDatabaseGetLocalBirthdaySource:;
- (void)CADDatabaseGetSourcesWithFaultedProperties:reply:;
- (void)CADRemoveCalendarItemsOlderThanDate:ofType:inSource:reply:;
- (void)CADSourceGetConstraints:reply:;
- (int)_tryPerformBlockWithSourceID:forAction:withBlock:;
- (void)CADSourceAddExchangeDelegateWithName:emailAddress:toSourceWithID:reply:;
- (void)CADSourceGetNotificationCollection:reply:;
- (void)CADSourceGetGrantedDelegatesList:reply:;
- (void)CADCountCalendarItemsOfType:inSource:reply:;
- (void)CADSourceRefresh:isUserRequested:reply:;
+ (BOOL)requiresEventAccess;
@end
