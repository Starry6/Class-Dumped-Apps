@interface AWECreativeToolsEditConfiguration : NSObject
@property (nonatomic) <ACCBusinessTemplate> businessTemplate;
@property (nonatomic) <ACCRouterCoordinatorProtocol> routerCoordinator;
@property (nonatomic) ACCCreationToolMediaTypeObject mediaType;
@property (nonatomic) @ inputData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:;
- (id)routerCoordinator;
- (void)setBusinessTemplate:;
- (void)_configSequenceEditServiceWithInputData:serviceProvider:;
- (BOOL)shouldUseOldImageAlbumEditor;
- (id)initWithInputData:designatedMediaType:featureConfigs:customizedComponents:customizedComponentPlugins:;
- (void)setRouterCoordinator:;
- (void)setMediaType:;
- (id)mediaType;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
@end
