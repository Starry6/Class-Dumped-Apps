@interface AWEPadPanelAdapter : HTSService
@property (nonatomic) AWEPadPanelHelper<AFDModalViewHelperProtocol> helper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)panelViewMasAdapt:superView:height:;
- (BOOL)showPanelAnimated:preAction:addition:completion:;
- (BOOL)dismissPanelAnimated:preAction:addition:completion:;
- (id)addCloseButtonTo:actionTarget:action:image:;
- (BOOL)dismissPanelAnimated:completion:;
- (id)addCloseButtonTo:actionTarget:action:image:imageSize:;
- (id)addPlaceHolderViewTo:magrinView:height:isBottom:;
- (void)panelViewMasAdaptFuntional:superView:height:;
- (void)panelContainerViewMasAdapt:superView:;
- (BOOL)showPanelAnimated:completion:;
- (BOOL)performBlock:;
- (void)setHelper:;
- (void).cxx_destruct;
- (id)helper;
@end
