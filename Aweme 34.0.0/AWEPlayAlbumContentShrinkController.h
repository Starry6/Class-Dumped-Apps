@interface AWEPlayAlbumContentShrinkController : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} shrinkContentFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialContentFrame;
@property (nonatomic) <AFDRichContentContainerViewControllerProtocol> richContentContainer;
- (id)richContentContainer;
- (void)setRichContentContainer:;
- (void)updateAwemeContentViewFrame:;
- (void)updateAwemeContentViewFrame:animationDuration:;
- (id)awemeContentViewInitFrame;
- (void)resizeVideoWhenDragPanel:;
- (void)shrinkContentWhenShowPanel:;
- (void)shrinkContentWhenShowPanel:animationDuration:;
- (void)forceRestoreContent;
- (void)forceRestoreContentWithAnimationDuration:;
- (void)setShrinkContentFrame:;
- (id)shrinkContentFrame;
- (void)setInitialContentFrame:;
- (void).cxx_destruct;
- (id)initialContentFrame;
@end
