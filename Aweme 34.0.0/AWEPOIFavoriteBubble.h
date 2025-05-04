@interface AWEPOIFavoriteBubble : UIControl
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) NSString bubbleText;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setIsDisplaying:;
- (void)p_tapped;
- (double)p_arrowXPositionForCenterX:;
- (void)p_addMaskWithPositionX:direction:;
- (void)showOnView:anchor:direction:yOffset:animated:;
- (void)showOnView:anchor:direction:yOffset:animated:duration:;
- (id)initWithFrame:;
- (id)contentView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)hitTest:withEvent:;
- (BOOL)isDisplaying;
- (id)leftLabel;
- (id)bubbleText;
- (void)setBubbleText:;
- (void)setLeftLabel:;
@end
