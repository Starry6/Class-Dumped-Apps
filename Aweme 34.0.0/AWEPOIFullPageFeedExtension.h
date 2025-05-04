@interface AWEPOIFullPageFeedExtension : NSObject
@property (nonatomic) DitoComponentViewModel<AWEPOISyncFeedExtensionGetModelProtocol><AWEPOIDetailNGViewModelZoomTransitionProtocol> lastEnterViewModel;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (id)lastEnterViewModel;
- (void)setLastEnterViewModel:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
