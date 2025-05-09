@interface AWENewHotSpotCommentCellController : UIViewController
@property (nonatomic) <AWEModernFeedCellContext> context;
@property (nonatomic) AWENewHotSpotCommentCellFrame cellFrame;
@property (nonatomic) NSString referString;
@property (nonatomic) UIViewController hostVC;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEAwemeModel commentFakeAwemeModel;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) <AWEAwemePlayInteractionRouterProtocol> router;
@property (nonatomic) <AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (nonatomic) AWENewHotSpotAuthorInfoView authorInfoView;
@property (nonatomic) AWENewHotSpotCommentLabel contentLabel;
@property (nonatomic) UIView blankImageClickView;
@property (nonatomic) UIImageView commentImageView;
@property (nonatomic) YYAnimatedImageView stickerImageView;
@property (nonatomic) AWENewHotSpotCommentCardActionPanelView actionPanelView;
@property (nonatomic) UIView sourceContainerView;
@property (nonatomic) UILabel sourceLabel;
@property (nonatomic) UIImageView sourceArrow;
@property (nonatomic) <AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (nonatomic) <AWECommentInputViewContextProtocol> commentContext;
@property (nonatomic) <AWECommentReplyListViewControllerProtocol> commentReplyListManager;
@property (nonatomic) BOOL isShowingCommentInputView;
@property (nonatomic) UITapGestureRecognizer reloadStickerGesture;
@property (nonatomic) UITapGestureRecognizer openStickerDetailGesture;
@property (nonatomic) NSLock diggLock;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
@property (nonatomic) BOOL isCommentPanelHeader;
@property (nonatomic) BOOL isStickerDetailShowing;
@property (nonatomic) BOOL isInsertCommentCard;
@property (nonatomic) BOOL needRefreshCommentPanel;
@property (nonatomic) NSString replyID;
@property (nonatomic) UIImage commentImage;
@property (nonatomic) # cardClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)commentModel;
- (void)setCommentModel:;
- (void)addSticker;
- (void)setReplyID:;
- (void)avatarClicked;
- (void)setIsViewAppearing:;
- (id)commentVC;
- (void)setCommentVC:;
- (id)commonTrackParams;
- (void)setSourceLabel:;
- (void)commentLikeActionNotification:;
- (id)commentContext;
- (void)setCommentContext:;
- (id)cellFrame;
- (void)setCellFrame:;
- (id)hostVC;
- (void)setHostVC:;
- (void)updateSubviewsContentWithModel:;
- (void)updateSubviewsContentWithModel:animated:;
- (void)updateWithReferString:;
- (void)updateWithHostVC:;
- (void)didStartShowing;
- (void)didEndShowing;
- (void)didBecomeVisibleToUsers;
- (id)initWithFeedCardModel:containerWidth:;
- (double)commentPanelHeaderVCHeight;
- (id)commentInputViewManager;
- (id)reloadStickerGesture;
- (id)openStickerDetailGesture;
- (void)setReloadStickerGesture:;
- (void)setOpenStickerDetailGesture:;
- (BOOL)isStickerDetailShowing;
- (void)setIsStickerDetailShowing:;
- (id)diggLock;
- (void)setDiggLock:;
- (void)setIsCommentPanelHeader:;
- (BOOL)isCommentPanelHeader;
- (id)sourceArrow;
- (void)setSourceArrow:;
- (void)buildUIComponent;
- (id)durationKey;
- (void)trackCommentCardDurationAction;
- (void)updateAllSubViews:;
- (id)commentFakeAwemeModel;
- (id)authorInfoView;
- (void)setCommentFakeAwemeModel:;
- (id)blankImageClickView;
- (id)commentImageView;
- (void)setCommentImage:;
- (id)stickerImageView;
- (void)reloadSticker;
- (void)setIsInsertCommentCard:;
- (void)setNeedRefreshCommentPanel:;
- (id)actionPanelView;
- (void)updateAllFrames:;
- (void)commentDeleteNotification:;
- (void)commentAddedNotification:;
- (void)commentTotalCountNotification:;
- (void)commentRisePanelNotification:;
- (void)updateCommentCountWithParams:delta:commentModelKey:;
- (BOOL)isCommentCardOfAweme;
- (BOOL)isCommentCardOfHotSpot;
- (void)updateToShowCommentVCWithEnterSource:panelHeightRatio:;
- (void)trackCommentPanelShowActionWithEnterMethod:previousPage:;
- (void)addEventHandlerToAuthorInfoView;
- (void)userNameClicked;
- (void)sourceClicked;
- (void)trackCommentCardContentAction:isImage:;
- (id)getHotSpotID;
- (id)getKeyWord;
- (long long)getCurrentTabIndex;
- (id)commentReplyListManager;
- (id)getGeneralItemModel;
- (BOOL)isInsertCommentCard;
- (BOOL)needRefreshCommentPanel;
- (void)contentOfVideoCommentClicked;
- (void)contentOfHotSpotCommentClicked;
- (void)postLikeNotificationForComment:;
- (void)trackCommentCardLikeAction:;
- (void)showCommentReplyTreeWithEnterSource:needDisplyHeader:panelHeightRatio:;
- (id)commentImage;
- (void)trackCommentCardShareAction;
- (id)relationTagForCommentCard;
- (id)groupIDForCommentCard;
- (id)authorIDForCommentCard;
- (id)generalTrackParamsForUserRelation;
- (BOOL)awe_isFoldText:range:;
- (void)foldComment;
- (void)blankImageClickViewTapped;
- (void)expandComment;
- (void)commentImageViewClicked;
- (void)likeCommentClickAction;
- (void)replyCommentClickAction;
- (void)shareCommentClickAction;
- (void)setIsShowingCommentInputView:;
- (void)handleReloadStickerGesture:;
- (void)handleOpenStickerDetailGesture:;
- (void)setBlankImageClickView:;
- (void)setCommentImageView:;
- (void)setStickerImageView:;
- (void)setCommentReplyListManager:;
- (BOOL)isShowingCommentInputView;
- (void)setCommentInputViewManager:;
- (void)setActionPanelView:;
- (void)setAuthorInfoView:;
- (void)dealloc;
- (id)interactor;
- (void)setInteractor:;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)handleLongPress:;
- (void)viewDidDisappear:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)sourceLabel;
- (void)addObservers;
- (id)router;
- (void)setRouter:;
- (void)updateWithModel:;
- (void)updateContext:;
- (BOOL)isViewAppearing;
- (id)replyID;
- (void)setSourceContainerView:;
- (id)sourceContainerView;
+ (double)modernFeedCellPreferedHeightForModel:width:;
@end
