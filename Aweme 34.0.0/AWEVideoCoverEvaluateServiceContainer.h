@interface AWEVideoCoverEvaluateServiceContainer : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (id)provideDVELogger;
- (id)provideEditorEvent;
- (id)provideToastView;
- (id)provideCoreCanvasService;
- (id)provideCoreImportService;
- (id)provideCoreActionService;
- (void).cxx_destruct;
@end
