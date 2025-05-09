@interface AWESequenceChooseFrameComponent : ACCFeatureComponent
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) <ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (nonatomic) AWESequenceChooseFrameService chooseFrameService;
@property (nonatomic) q selectedIndex;
@property (nonatomic) DUXPopover chooseFrameTooltip;
@property (nonatomic) double debounceDelay;
@property (nonatomic) @? debounceBlock;
@property (nonatomic) BOOL isPreparingVideo;
@property (nonatomic) BOOL firstSelectedItemDisplayTriggered;
@property (nonatomic) double lastSelectTimeStamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)sequencePlayControlService;
- (void)setSequencePlayControlService:;
- (void)bindServices:;
- (id)serviceBindingArray;
- (id)chooseFrameService;
- (void)setChooseFrameService:;
- (void)clickChooseFrameAtIndex:;
- (void)showChooseFrameTooltipOnView:atIndex:scene:;
- (void)dismissChooseFrameTooltip;
- (BOOL)isPreparingVideo;
- (long long)getProjectVideoTimeWithIndex:;
- (void)setIsPreparingVideo:;
- (void)trackClickSelectFrameWithIndex:;
- (id)chooseFrameTooltip;
- (void)setChooseFrameTooltip:;
- (BOOL)firstSelectedItemDisplayTriggered;
- (void)setFirstSelectedItemDisplayTriggered:;
- (void)setLastSelectTimeStamp:;
- (double)lastSelectTimeStamp;
- (BOOL)canChooseFrameTooltipShow:index:scene:;
- (void)trackShowSelectFrame;
- (void)debounce:afterDelay:;
- (void)setDebounceDelay:;
- (double)debounceDelay;
- (void)setSelectedIndex:;
- (void)dealloc;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (id)debounceBlock;
- (void)setDebounceBlock:;
@end
