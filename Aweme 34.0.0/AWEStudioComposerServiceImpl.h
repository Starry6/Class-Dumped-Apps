@interface AWEStudioComposerServiceImpl : HTSService
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startWithComposerModel:cameraCustomization:injectService:prepareCompletion:;
- (id)startCreationTaskWithConfig:beforeTaskInject:completion:exitAction:;
- (id)startWithComposerModel:cameraCustomization:;
- (id)startWithComposerModel:cameraCustomization:injectService:;
- (id)composerModelWithSchema:error:;
- (id)startCreationTaskWithConfig:completion:exitAction:;
- (id)generateSchemaWithComposerModel:;
- (id)startWithComposerModel:;
- (void)resetFeatureConfig:mode:;
- (void)startSilentPublishTaskWithConfig:silentPublishApi:beforeTaskInject:completeAddPublishTask:;
- (id)startWithComposerModel:cameraCustomization:injectService:completion:exitAction:;
- (void)setIsExecuting:;
- (BOOL)isExecuting;
+ (BOOL)p_publishEnabled;
+ (void)p_notSupportPublishCallbackWithBlock:;
@end
