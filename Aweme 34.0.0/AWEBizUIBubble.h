@interface AWEBizUIBubble : UIControl
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setIsDisplaying:;
- (void)p_tapped;
- (double)p_arrowXPositionForCenterX:;
- (void)p_addMaskWithPositionX:direction:;
- (void)showOnView:content:anchor:direction:yOffset:animted:;
- (id)initWithFrame:;
- (id)contentView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)hitTest:withEvent:;
- (BOOL)isDisplaying;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)contentWithBubbleContent:highlightContent:;
+ (double)adaptiveFontSize:;
+ (id)favoriteHintContent;
@end
