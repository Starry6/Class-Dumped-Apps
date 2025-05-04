@interface AWESearchFeelGoodDialogBubbleView : UIView
@property (nonatomic) UIView bubbleMainFrameView;
@property (nonatomic) UIImageView bubbleTail;
@property (nonatomic) UILabel bubbleLabel;
@property (nonatomic) NSString title;
@property (nonatomic) @? tapActionBlock;
- (void)configureUI;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)setBubbleLabel:;
- (id)bubbleLabel;
- (id)bubbleMainFrameView;
- (id)bubbleTail;
- (void)bubbleTaped;
- (void)setBubbleMainFrameView:;
- (void)setBubbleTail:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
