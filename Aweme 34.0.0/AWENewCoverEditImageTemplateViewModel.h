@interface AWENewCoverEditImageTemplateViewModel : AWEImageTemplateEditViewModel
- (id)commonTrackParams;
- (id)currentImageModel;
- (id)templateIDInDraftModel;
- (long long)templateScene;
- (void)processTemplates:categories:needFilterCategoryArray:;
- (void)refreshTemplatesDataForAllowType;
- (id)getTemplateInfoModel;
- (void)setup;
- (id)currentImage;
@end
