@interface STCoreDataPersistenceSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userDataWithIdentifier:;
- (void)saveCommunicationSafetySettingsForDSID:checkForUnsafePhotos:communicationSafetyNotificationEnabled:communicationSafetyAnalyticsEnabled:completionHandler:;
- (id)_coreUserForIdentifier:inContext:;
@end
