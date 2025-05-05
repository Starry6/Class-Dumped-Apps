@interface BDXBridgeRequestPermissionMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)requestPermissionForCameraType:;
- (void)callWithParamModel:completionHandler:;
- (void)requestPermission:completionHandler:;
- (void)requestPermissionForCalendarType:;
- (void)requestPermissionForContactsType:;
- (void)requestPermissionForContactsType:;
- (void)requestPermissionForLocationType:;
- (void)requestPermissionForLocationType:;
- (void)requestPermissionForMicrophoneType:;
- (void)requestPermissionForNotificationType:;
- (void)requestPermissionForPhotoAlbumType:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (void)showAlertIfSupported:tokenContext:completion:;
+ (id)metaInfo;
@end
