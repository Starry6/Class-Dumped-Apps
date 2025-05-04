@interface AWEIMServiceSettingManager : NSObject
+ (BOOL)shouldDropLoginRequestForNewUser;
+ (BOOL)enableIMEmoticonTrack;
+ (BOOL)revertPullNonFriendActiveStatus;
+ (BOOL)revertChangesOnAccessForSyncingData;
+ (BOOL)enableIMUserGetFromNewApi;
+ (BOOL)enableIMAudioTrack;
+ (BOOL)enableActiveUploadEnterBackground;
+ (BOOL)revertUploadNonFriendActiveStatus;
+ (id)uidBlackListForUserInfoRequest;
@end
