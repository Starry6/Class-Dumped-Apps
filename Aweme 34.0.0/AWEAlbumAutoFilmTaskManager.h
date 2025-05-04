@interface AWEAlbumAutoFilmTaskManager : NSObject
@property (nonatomic) AWEAlbumAutoFilmPresetService serviceWrapper;
@property (nonatomic) AWEAlbumAutoFilmTaskDownload downloadTask;
@property (nonatomic) AWEAlbumAutoFilmTaskMaterial materialTask;
- (id)extractFeaturesWithPublishModel:assets:;
- (id)recommendFeatureTypesStringArray;
- (void)extractFramesWithMaterials:publishViewModel:completion:;
- (id)presetService;
- (void)fetchAlbumAutoTemplateListWithMaterials:extraParams:completion:;
- (id)recommendService;
- (id)materialTask;
- (id)serviceWrapper;
- (void)setServiceWrapper:;
- (void)setMaterialTask:;
- (void).cxx_destruct;
- (id)downloadTask;
- (void)setDownloadTask:;
@end
