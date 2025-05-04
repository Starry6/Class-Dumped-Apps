@interface AWEPOIEditCreationComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
- (void)componentDidMount;
- (id)sequenceEditService;
- (id)poiEditModel;
- (void)setSequenceEditService:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
