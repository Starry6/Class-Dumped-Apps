@interface AWEFeedRootViewControllerAbilityProxy : NSObject
@property (nonatomic) AWEFeedContainerViewController feedContainerViewController;
@property (nonatomic) <AWEFeedRootViewControllerAbilityCallProtocol> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedContainerViewController;
- (void)refreshWithModel:completion:;
- (void)showBackgroundImagesWithProgress:;
- (void)cancelDragRefreshGesture;
- (void)setFeedContainerViewController:;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)cancelRefreshWithCompletion:;
@end
