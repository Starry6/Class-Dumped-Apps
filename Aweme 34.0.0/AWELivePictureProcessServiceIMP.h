@interface AWELivePictureProcessServiceIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)applyTemplateToImageWithOriginImagePath:templateID:infoModels:enterFrom:completion:;
- (void)predownloadTemplateResourcesWithTemplateID:enterFrom:;
@end
