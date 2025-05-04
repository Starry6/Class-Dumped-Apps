@interface AWEHotSpotFoldVideoManager : NSObject
@property (nonatomic) UIView gesBlockView;
@property (nonatomic) DUXLoadingToast loadingToast;
@property (nonatomic) @? afterUnfold;
@property (nonatomic) AWEHotSpotFeedViewModel viewModel;
@property (nonatomic) UIViewController<AWEAwemeHotSearchTableViewControllerProtocol> containerController;
- (id)containerController;
- (void)setContainerController:;
- (id)loadingToast;
- (void)setLoadingToast:;
- (void)unfoldFoldedVideoWithCompletion:;
- (void)afterUnfoldFoldedVideoAction:error:;
- (void)showToastNum:;
- (id)afterUnfold;
- (void)unfoldFoldedVideoData;
- (void)setAfterUnfold:;
- (void)beforeUnfoldFoldedVideoAction;
- (id)gesBlockView;
- (void)setGesBlockView:;
- (void)startBlock;
- (void)stopBlock;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
