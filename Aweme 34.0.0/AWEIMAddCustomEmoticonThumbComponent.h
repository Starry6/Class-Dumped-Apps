@interface AWEIMAddCustomEmoticonThumbComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceService;
@property (nonatomic) <ACCSequencePlayControlServiceProtocol> sequencePlayControl;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)sequenceService;
- (void)setSequenceService:;
- (id)sequencePlayControl;
- (void)setSequencePlayControl:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
