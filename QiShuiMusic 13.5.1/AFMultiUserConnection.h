@interface AFMultiUserConnection : NSObject
- (void)_clearConnection;
- (id)_connection;
- (id)init;
- (void)getSharedUserIdForHomeUserId:completion:;
- (id)initWithConnectionFactory:;
- (void)getHomeUserIdForSharedUserId:completion:;
- (void).cxx_destruct;
- (void)getConformingSharedUserIdForHomeUserId:completion:;
- (void)getFirstNameForSharedUserId:completion:;
- (void)getConformingSharedUserIds:;
- (void)getMultiUserSettingsForSharedUserID:completion:;
- (void)getHomeUserIdOfRecognizedUserWithCompletion:;
- (void)getiCloudAltDSIDOfRecognizedUserWithCompletion:;
- (void)getPreferredMediaUserHomeUserIDWithCompletion:;
- (void)homeUserIdToNames:;
- (void)getSharedUserInfoForSharedUserID:completion:;
- (id)_multiUserServiceWithErrorHandler:;
- (void)getSharedUserProfileLimitWithCompletion:;
@end
