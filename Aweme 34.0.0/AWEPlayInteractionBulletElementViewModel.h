@interface AWEPlayInteractionBulletElementViewModel : NSObject
@property (nonatomic) AWECommentAnchorModel anchorModel;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setAnchorModel:;
- (id)anchorModel;
- (void)onBarrageView:clickedAt:;
- (void)trackAnchorEntranceShow;
- (void)showCommentPanelForRichAwemeDetailWithInsertIds:isComment:;
- (void)showCommentPanelWithInsertIds:enterMethod:isComment:;
- (void)transferToUserProfile:enterMethod:;
- (void)showCoinPanelWithInsertIds:enterMethod:;
- (void)showGoldLikePanelWithInsertIDs:enterMethod:;
- (void)trackShowCommentPanel:;
- (id)typeStringForGeneralAnchor;
- (void)onAnchorClicked;
- (id)initWithContext:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
@end
