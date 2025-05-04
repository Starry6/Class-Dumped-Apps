@interface AWEStudioOpenShareServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareExtensionEnterEditPageWithOnePhotoPath:;
- (void)shareExtensionEnterEditPageWithMultiPhotoPaths:;
- (void)shareExtensionEnterEditPageWithVideoPaths:;
- (void)shareExtensionEnterEditPageWithMixedPaths:;
- (BOOL)isFromLVProductWithAppKey:;
+ (BOOL)p_publishEnabled;
@end
