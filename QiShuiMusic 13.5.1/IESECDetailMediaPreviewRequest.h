@interface IESECDetailMediaPreviewRequest : IESECMediaPreviewRequest
@property (nonatomic) <IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) BOOL needDetailImagePreviewDelegateBehavior;
@property (nonatomic) UIView dismissAnimationTargetView;
- (id)dismissAnimationTargetView;
- (BOOL)needDetailImagePreviewDelegateBehavior;
- (void)setDismissAnimationTargetView:;
- (void)setNeedDetailImagePreviewDelegateBehavior:;
- (void)setContainer:;
- (id)init;
- (id)container;
- (void).cxx_destruct;
@end
