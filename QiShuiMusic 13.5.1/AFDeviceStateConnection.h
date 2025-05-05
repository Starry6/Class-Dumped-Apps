@interface AFDeviceStateConnection : NSObject
- (void)fetchSiriKitAppIdentifiersWithNotificationPreviewRestrictionsWithCompletion:;
- (void)getPersonalSettingsForSharedUserID:completion:;
@end
