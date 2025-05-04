@interface AWECommentIMSwiftImpl.CommentLongPressPanelForwardElement : AWERLComponent2
@property (nonatomic) AWECommentLongPressPanelContext commentPageContext;
@property (nonatomic) BOOL horizonMode;
@property (nonatomic) BOOL showRedPoint;
- (id)commentPageContext;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void)setCommentPageContext:;
- (BOOL)horizonMode;
- (void)setHorizonMode:;
- (BOOL)showRedPoint;
- (void)setShowRedPoint:;
- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (void)elementWillDisplay:;
- (BOOL)elementKeepPanelAliveAfterExecuteAction;
- (id)elementImageURL;
- (id)init;
- (BOOL)disableInteraction;
- (void).cxx_destruct;
- (unsigned long long)elementType;
@end
