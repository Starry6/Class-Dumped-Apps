@interface AWESearchVideoInteractionManager : HTSService
@property (nonatomic) NSLock diggLock;
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
@property (nonatomic) BOOL commentVCHasShown;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString pageType;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)playDiggAnimationInView:location:image:;
- (void)requireLoginWithContext:completion:;
- (long long)playProgressThreshold;
- (id)commentVC;
- (void)setCommentVC:;
- (BOOL)userIsLogin;
- (id)diggLock;
- (void)setDiggLock:;
- (void)setCommentVCHasShown:;
- (BOOL)commentVCHasShown;
- (void)diggWithModel:referString:completion:;
- (BOOL)isInvalidAwemeModel:action:;
- (BOOL)doubleClickGuideLogin;
- (void)commentDiggWithAwemeID:commentID:diggType:completion:;
- (void)doFavoriteWithModel:logExtra:favoriteAction:completion:;
- (void)showCommentPanelWithModel:withCommentIDs:showInputView:logExtra:;
- (void)showSharePanelWithModel:logExtra:;
- (void)showSharePanelWithModel:logExtra:type:;
- (void)p_diggWithModel:referString:completion:;
- (id)shareConfigurationHandlerWithModel:logExtra:;
- (id)makeExtraLogInfoForSharingWithModel:logExtra:;
- (void)setModel:;
- (void)setPageType:;
- (id)model;
- (void).cxx_destruct;
- (id)pageType;
@end
