@interface AWEPOISyncFeedExtensionAbilityProviderExtension : AWEPOIBaseExtension
@property (nonatomic) <AWEPOISyncFeedExtensionProtocol> syncFeedManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)syncFeedManager;
- (BOOL)hasMoreWithPageModel:;
- (id)awemeModelWithViewModelTag:;
- (void)syncFeedExtensionDidFetchRawData:error:;
- (id)zoomTransitionStartViewWithViewModelTag:;
- (void)syncFeedExtensionWillReturnToViewModelTag:isScrolled:;
- (void)syncFeedExtensionDidReturnToViewModelTag:;
- (id)syncFeedGroupComponentNodeTagList;
@end
