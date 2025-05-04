@interface AWEStudioComposerScenarioConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) <UIViewControllerTransitioningDelegate> customTransitionDelegate;
@property (nonatomic) AWEStudioComposerRecordPageConfig record;
@property (nonatomic) AWEStudioComposerAlbumPageConfig album;
@property (nonatomic) AWEStudioComposerEditPageConfig edit;
@property (nonatomic) AWEStudioComposerPublishPageConfig publish;
- (id)customTransitionDelegate;
- (void)setCustomTransitionDelegate:;
- (void)setRecord:;
- (id)initWithMode:;
- (id)publish;
- (void)setPublish:;
- (id)record;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
- (id)edit;
- (void)setEdit:;
@end
