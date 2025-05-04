@interface AWEUserWorkPrivacyController : AWEUserWorkChangeController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didChangeAwemePrivacyType:privacyPermissionType:extra:syncHandle:;
- (void)dealloc;
- (void)containerViewDidLoad;
@end
