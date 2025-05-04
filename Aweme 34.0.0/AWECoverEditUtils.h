@interface AWECoverEditUtils : NSObject
+ (BOOL)shouldUseNewSlidesCoverEdit:;
+ (void)generateCoverWithPublishModel:configCoverModel:completion:;
+ (void)openCoverEditVCWithSourceImage:sourceFilePath:serviceProvider:workspace:configCoverModel:index:activeNLE:saveBlock:dismissBlock:cancelBlock:completion:;
+ (void)getCoverSourceImageWithWorkspace:index:completion:;
+ (void)createNewProjectWithImage:filePath:index:sourceModel:configCoverModel:completion:;
+ (void)createNewProjectGlobalThreadWithImage:filePath:index:sourceModel:configCoverModel:completion:;
+ (void)replaceMainResource:resourceFilePath:imageSize:templateModel:;
+ (void)replaceMainResource:nle:resourceFilePath:imageSize:enableClip:;
+ (id)coverNLEModelFileName;
+ (void)updateResourceTagWithNleModel:nle:fileName:;
+ (void)generateCoverWithSourceImage:filePath:publishModel:configCoverModel:completion:;
+ (id)coverResultFileName;
+ (id)getCoverSourceImageFilePath:index:;
+ (void)openSelectCoverVCWithWorkspace:isCoverEdit:serviceContainer:currentProjectUUID:didChooseCoverBlock:;
+ (void)openCoverPreviewVCWithCoverImage:publishTitle:publishCaption:initialIndex:delegate:;
+ (void)openCoverEditVCWithServiceProvider:workspace:configCoverModel:index:activeNLE:saveBlock:dismissBlock:cancelBlock:;
+ (id)storeNLE:;
+ (id)getCoverResultImageFromCache:;
@end
