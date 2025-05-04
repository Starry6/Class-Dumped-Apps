@interface AWEPlayGoodsBackgroundVideoManager : NSObject
@property (nonatomic) AWEPlayGoodsBackgroundVideoViewController goodsBackgroundVideoViewController;
@property (nonatomic) AWEPlayGoodsVideoInteractionView goodsVideoInteractionView;
@property (nonatomic) UIView shadowView;
@property (nonatomic) UIViewController feedCellViewController;
@property (nonatomic) UIViewController playVideoViewController;
@property (nonatomic) UIViewController interactionViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInteractionViewController:;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (id)feedCellViewController;
- (void)setFeedCellViewController:;
- (id)goodsBackgroundVideoViewController;
- (void)setGoodsBackgroundVideoViewController:;
- (id)goodsVideoInteractionView;
- (void)setGoodsVideoInteractionView:;
- (void)reMakeGoodsVideoInteractionViewConstraint;
- (void)prepareToPlayWithModel:;
- (void)didChangePlaybackStateWithPlaybackAction:;
- (id)shadowView;
- (void)setShadowView:;
- (void).cxx_destruct;
- (id)interactionViewController;
@end
