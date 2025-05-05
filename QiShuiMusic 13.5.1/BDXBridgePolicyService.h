@interface BDXBridgePolicyService : NSObject
+ (long long)authorizationStatusForEntityType:token:context:;
+ (id)calendarsForEntityStore:entityType:token:context:;
+ (void)getStringWithToken:context:completion:;
+ (id)getUIImagePickerControllerWithToken:context:;
+ (void)openUrl:token:context:;
+ (void)requestAccessForMediaType:completionHandler:token:context:;
+ (void)requestAccessForUserNotificationsWithOptions:handler:token:context:;
+ (void)requestAuthorizationForAlbumType:token:context:;
+ (void)requestAuthorizationForAlbumTypeForAccessLevel:handler:token:context:;
+ (void)reuqestAccessForCalendarType:eventStore:completion:token:context:;
+ (void)setString:token:context:;
@end
