@interface AWEImageAlbumEditImageTemplateComponent : ACCFeatureComponent
- (void)componentDidAppear;
+ (id)recoverBlocksForPublishModel:;
+ (void)regenerateTheNecessaryResourcesForPublishViewModel:completion:;
+ (void)clearImageTemplateInfoForImageAtIndex:publishModel:;
+ (BOOL)ifTemplateCacheIsClearedFor:;
+ (id)transferCacheDicToTemplateInfo:taskID:;
@end
