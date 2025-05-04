@interface AWESearchPlayerInteractorComponentModel : AWESearchComponentBasicModel
@property (nonatomic) AWESearchPlayerInteractorLeftTopContainerComponentModel leftTopContainerModel;
@property (nonatomic) AWESearchPlayerInteractorLeftBottomContainerComponentModel leftBottomContainerModel;
@property (nonatomic) AWESearchPlayerInteractorRightBottomContainerComponentModel rightBottomContainerModel;
@property (nonatomic) AWESearchPlayerInteractorBottomContainerComponentModel bottomContainerModel;
@property (nonatomic) AWESearchPlayerInteractorTitleContainerComponentModel titleContainerModel;
@property (nonatomic) AWESearchPlayerInteractorTransformContainerComponentModel transformContainerModel;
- (id)rightBottomContainerModel;
- (id)leftTopContainerModel;
- (void)setLeftTopContainerModel:;
- (void)setRightBottomContainerModel:;
- (void)setBottomContainerModel:;
- (void)setLeftBottomContainerModel:;
- (id)bottomContainerModel;
- (id)leftBottomContainerModel;
- (id)transformContainerModel;
- (id)titleContainerModel;
- (void)setTitleContainerModel:;
- (void)setTransformContainerModel:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
