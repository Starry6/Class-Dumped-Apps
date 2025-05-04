@interface AWECoverNLEEditorServiceContainer : IESStaticContainer
@property (nonatomic) <ACCBusinessInputData> inputData;
@property (nonatomic) <ACCUIViewControllerProtocol> viewController;
- (id)provideSingleton:ACCPublishRepository:;
- (id)provideSingleton:AWECoverEditorNLEEditorLayoutManager:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)inputData;
- (void)setInputData:;
@end
