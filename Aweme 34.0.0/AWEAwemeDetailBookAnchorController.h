@interface AWEAwemeDetailBookAnchorController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellViewControllerDidRenderFirstFrame:;
- (void)viewDidLoadAfterTableviewSetup;
- (void)setupPageContext;
- (void)playFeedCurrentVideoIfNeeded:;
@end
