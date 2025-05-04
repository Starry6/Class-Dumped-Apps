@interface AWEXBridgePolicyService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openUrl:token:context:;
- (id)calendarsForEntityStore:entityType:token:context:;
- (long long)authorizationStatusForEntityType:token:context:;
- (void)requestAccessForMediaType:completionHandler:token:context:;
- (void)requestAccessForCalendarType:eventStore:completion:token:context:;
- (void)setString:token:context:;
- (void)requestAuthorizationForAlbumType:token:context:;
- (void)requestAccessForUserNotificationsWithOptions:handler:token:context:;
- (id)getUIImagePickerControllerWithToken:context:;
- (void)getStringWithToken:context:completion:;
- (void)requestAuthorizationForAlbumTypeForAccessLevel:handler:token:context:;
- (void)requestAccessForEntityType:token:context:completionHandler:;
@end
