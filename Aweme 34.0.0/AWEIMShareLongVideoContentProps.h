@interface AWEIMShareLongVideoContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) double bubbleCornerRadius;
@property (nonatomic) @? tapAction;
@property (nonatomic) AWEIMMessage originMessage;
@property (nonatomic) BOOL needFold;
- (BOOL)needFold;
- (void)setNeedFold:;
- (double)bubbleCornerRadius;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)setBubbleCornerRadius:;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
