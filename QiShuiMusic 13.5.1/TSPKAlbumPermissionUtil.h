@interface TSPKAlbumPermissionUtil : NSObject
@property (nonatomic) BOOL shouldWork;
@property (nonatomic) q addOnlyStatus;
@property (nonatomic) q readWriteStatus;
- (long long)readWriteStatus;
- (BOOL)addOnlyPermissionValidateSuccess;
- (long long)addOnlyStatus;
- (id)getPermissionParams;
- (BOOL)permissionValidateSuccess;
- (void)setAddOnlyStatus:;
- (void)setReadWriteStatus:;
- (void)setShouldWork:;
- (BOOL)shouldWork;
- (void)updateAddOnlyPermissionStatus:;
- (void)updateReadWritePermissionStatus:;
+ (id)albumAuthorization;
+ (id)sharedInstance;
@end
