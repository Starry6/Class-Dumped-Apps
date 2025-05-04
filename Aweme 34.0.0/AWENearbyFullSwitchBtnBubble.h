@interface AWENearbyFullSwitchBtnBubble : UIView
@property (nonatomic) UIView bubble;
@property (nonatomic) UILabel bubbleLabel;
@property (nonatomic) UILabel bubbleBtn;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? clickBlk;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBubbleLabel:;
- (id)bubbleLabel;
- (void)setClickBlk:;
- (id)clickBlk;
- (void)setBubbleBtn:;
- (id)bubbleBtn;
- (void)showOnView:centerPoint:;
- (id)initWithFrame:;
- (void)dismiss;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
- (void)setupUI;
- (void)tap;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
