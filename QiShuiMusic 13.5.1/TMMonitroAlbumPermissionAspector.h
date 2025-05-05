@interface TMMonitroAlbumPermissionAspector : NSObject
@property (nonatomic) BOOL permissionCheckSettings;
@property (nonatomic) BOOL permissionDeniedGuideSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionWhenPermissionDenied;
- (void)handlePermissionResult:;
- (BOOL)permissionCheckSettings;
- (BOOL)permissionDeniedGuideSettings;
- (void)setPermissionCheckSettings:;
- (void)setPermissionDeniedGuideSettings:;
@end
