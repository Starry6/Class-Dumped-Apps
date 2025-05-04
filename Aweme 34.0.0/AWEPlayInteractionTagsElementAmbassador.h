@interface AWEPlayInteractionTagsElementAmbassador : AFDAmbassador
@property (nonatomic) <AWEPlayInteractionTagsElementAmbassadorDelegate> delegate;
@property (nonatomic) UIView<AFDPlayInteractionTagsContainerViewProtocol> containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateContainerView;
- (void)trackShowCommentPanel:;
- (void)showCommentPanelWithInsertIds:enterMethod:;
- (BOOL)canShowContainerView;
- (id)delegate;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
