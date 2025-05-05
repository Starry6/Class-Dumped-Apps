@interface CNUIRemotePhotoFutures : NSObject
+ (id)localPhotoForEmailAddresses:;
+ (id)photoForContact:;
+ (id)photoForContact:userDefaults:;
+ (id)directoryServicesPhotoForEmailAddresses:;
+ (id)gravatarPhotoForEmailAddresses:;
@end
