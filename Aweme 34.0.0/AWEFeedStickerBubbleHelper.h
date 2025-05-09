@interface AWEFeedStickerBubbleHelper : NSObject
@property (nonatomic) BOOL bubbling;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) UIButton<AWEInteractiveBubbleViewProtocol> bubbleView;
@property (nonatomic) AWEFeedStickerBubbleConfig currentConfig;
@property (nonatomic) UIView bubbleContainer;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) ACCStickerContainerView stickerContainer;
@property (nonatomic) <AWEFeedStickerBubbleHelperDelegate> delegate;
- (void)setStickerContainer:;
- (id)stickerContainer;
- (void)showBubbleAtPoint:config:;
- (void)dismissBubbleAnimated:;
- (BOOL)bubbling;
- (void)p_buildBubbleView:;
- (void)p_clickOnBubbleView;
- (void)p_setBubbleVisible:animated:;
- (BOOL)isPointOnBubble:;
- (id)customEdgeInset;
- (void)setBubbling:;
- (void)hideBubbleView;
- (BOOL)handleBubbleEventOnPoint:;
- (void)setModel:;
- (id)delegate;
- (void)setCurrentConfig:;
- (id)model;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setDelegate:;
- (id)currentConfig;
- (id)bubbleContainer;
- (void)setBubbleContainer:;
- (id)bubbleView;
- (void)setBubbleView:;
@end
