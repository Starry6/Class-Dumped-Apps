@interface TMAlbumPermissionService : NSObject
@property (nonatomic) q albumPermissionStatus;
- (long long)albumPermissionStatus;
- (long long)getAlbumPermissionStatus;
- (void)setAlbumPermissionStatus:;
+ (void)checkPermissionStatus:Completionhandler:;
+ (void)createAlbumCollection:completion:;
+ (long long)getAlbumPermissionStatus;
+ (void)saveToAlbumWith:requestPlaceHolder:completion:;
+ (id)sharedInstance;
@end
