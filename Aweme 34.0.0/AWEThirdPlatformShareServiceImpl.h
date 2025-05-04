@interface AWEThirdPlatformShareServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPlatformAvailable:;
- (BOOL)isPlatformInstalled:;
- (BOOL)openAppWithPlatform:;
- (void)openAppWithPlatform:completion:;
- (void)shareWithModel:toPlatform:completion:;
- (void)openAppWithPlatform:delay:completion:;
- (BOOL)handleOpenURL:;
+ (id)sharedInstance;
@end
