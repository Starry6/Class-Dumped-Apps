@interface AWEDetailPresentContainerManager : NSObject
@property (nonatomic) BOOL isShowingPresentContainer;
@property (nonatomic) NSPointerArray presentViewControllers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDetailPresentContainerTopOfViewAndPreventPlayFeedVideo;
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
