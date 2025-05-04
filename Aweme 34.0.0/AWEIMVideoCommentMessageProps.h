@interface AWEIMVideoCommentMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) UIColor bubbleColor;
@property (nonatomic) UIColor bubbleStrokeColor;
@property (nonatomic) NSAttributedString commentStr;
@property (nonatomic) NSURL coverURL;
- (void)setBubbleStrokeColor:;
- (void)setCommentStr:;
- (id)bubbleStrokeColor;
- (id)commentStr;
- (void).cxx_destruct;
- (void)setBubbleColor:;
- (id)bubbleColor;
- (id)tapAction;
- (void)setTapAction:;
- (id)coverURL;
- (void)setCoverURL:;
@end
