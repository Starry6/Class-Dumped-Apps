@interface MSConnection : NSObject
- (id)init;
- (void)dealloc;
- (void)forgetPersonID:;
- (void)pollForSubscriptionUpdatesForPersonID:;
- (BOOL)dequeueAssetCollectionWithGUIDs:personID:outError:;
- (void).cxx_destruct;
- (void)refreshServerSideConfigurationForPersonID:;
- (id)pause;
- (id)serverSideConfigurationForPersonID:;
- (void)resume:;
- (void)deleteAssetCollections:personID:;
- (BOOL)enqueueAssetCollections:personID:outError:;
- (void)resetServerStateForPersonID:;
- (void)checkForOutstandingActivities;
- (void)_waitForMessageToBeSent;
- (void)handleSubscriptionPushForPersonID:;
- (void)abortActivitiesForPersonID:;
- (id)_machErrorWithUnderlyingError:;
+ (id)sharedConnection;
@end
