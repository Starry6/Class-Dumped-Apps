@interface AWECommentPanelTabSwiftImpl.CommentTabManager : NSObject
@property (nonatomic) @? tabDidUpdate;
@property (nonatomic) @? tabDidShow;
@property (nonatomic) BOOL didLanding;
@property (nonatomic) <AWECommentTabComponentLifeCycleProtocol> msgSender;
- (BOOL)didLanding;
- (void)setDidLanding:;
- (id)tabDidUpdate;
- (id)tabDidShow;
- (id)viewControllerForType:;
- (BOOL)containsTab:;
- (void)configSegmentedControl:;
- (void)configContainer:;
- (void)setNeedUpdateData;
- (id)componentTypes:;
- (void)setTabDidUpdate:;
- (void)setTabDidShow:;
- (id)init;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setMsgSender:;
- (id)msgSender;
- (long long)tabCount;
@end
