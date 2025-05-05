@interface IESLiveMediaPermissionCheckerAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkAudioPermissionWithMicCert:completion:;
- (void)checkVideoPermissionWithMicCert:cameraCert:completion:;
+ (void)checkAudioPermissionWithMicCert:context:completion:;
@end
