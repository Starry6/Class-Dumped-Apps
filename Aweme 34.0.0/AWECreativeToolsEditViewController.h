@interface AWECreativeToolsEditViewController : ACCViewController
@property (nonatomic) ACCEditViewControllerInputData inputData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBusinessConfiguration:;
- (id)editService;
- (id)beforeTransitionSnapshotView;
- (id)handleTargetViewControllerInputData;
- (void)prepareForLoadComponent;
- (void)configWithInputData:;
- (id)beforeTransitionMediaSnapshotView;
- (id)creatComponentManager;
- (void)popSelf;
- (void)beforeLoadLazyComponent;
@end
