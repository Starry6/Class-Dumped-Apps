@interface AWESearchPresentContainerManager : NSObject
@property (nonatomic) BOOL isShowingPresentContainer;
@property (nonatomic) NSPointerArray presentViewControllers;
- (BOOL)isSearchPresentContainerTopOfViewAndPreventPlayFeedVideo;
- (id)presentViewControllers;
- (void)registerPresentView:;
- (void)unregisterPresentView:;
- (BOOL)isShowingPresentContainer;
- (void)setIsShowingPresentContainer:;
- (void)setPresentViewControllers:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
