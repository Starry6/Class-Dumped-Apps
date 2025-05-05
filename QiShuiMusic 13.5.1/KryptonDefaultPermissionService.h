@interface KryptonDefaultPermissionService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)requestGranted:;
- (void)requestPermissionForMediaType:withBlock:;
- (void)requestPermissions:withBlock:;
@end
