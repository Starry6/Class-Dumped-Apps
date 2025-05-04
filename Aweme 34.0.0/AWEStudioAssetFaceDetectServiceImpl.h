@interface AWEStudioAssetFaceDetectServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detectFaceWithAsset:completion:;
- (void)detectFaceWithImage:completion:;
+ (void)detectFaceWithAssets:images:completion:;
@end
