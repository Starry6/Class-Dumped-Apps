@interface AWEFeedViewedViewBarContext : NSObject
@property (nonatomic) <AWEAwemePlayInteractionPanelDelegate> interactionPanelController;
@property (nonatomic) <AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (nonatomic) @? pureModeBlock;
@property (nonatomic) @? getInteractionControllerBlock;
@property (nonatomic) @? isRepostAwemeBlock;
@property (nonatomic) @? isDraggingBlock;
@property (nonatomic) <AWEPlayInteractionViewControllerProtocol> interactionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPureModeBlock:;
- (id)pureModeBlock;
- (id)isDraggingBlock;
- (void)setIsDraggingBlock:;
- (id)commonCtx;
- (void)setCommonCtx:;
- (id)getInteractionControllerBlock;
- (void)setGetInteractionControllerBlock:;
- (id)isRepostAwemeBlock;
- (void)setIsRepostAwemeBlock:;
- (void)doBottomViewedAction:;
- (id)interactionPanelController;
- (void).cxx_destruct;
- (id)interactionController;
@end
