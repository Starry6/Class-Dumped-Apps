@interface AWESearchCachalotCardInjectManager : NSObject
@property (nonatomic) NSMutableDictionary injectViewMap;
- (id)injectViewMap;
- (void)injectViewWithType:siteType:viewClass:priority:resident:;
- (double)fetchTotalInjectViewHeightWithViewModel:containerWidth:;
- (void)clearUnreusedInjectViewWithViewModel:componentView:animated:;
- (void)updateInjectView:componentView:;
- (id)componentInjectViewSizeWithViewModel:containerWidth:viewType:;
- (void)updateInjectView:componentView:isVisible:;
- (void)bindingComponentAttachmentModelWithViewModel:;
- (void)bindingInjectViewDelegateWithViewModel:;
- (void)setInjectViewMap:;
- (void).cxx_destruct;
@end
