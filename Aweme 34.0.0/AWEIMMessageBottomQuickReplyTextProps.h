@interface AWEIMMessageBottomQuickReplyTextProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSAttributedString content;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) @? tapAction;
- (void)setBorderColor:;
- (void)setBorderWidth:;
- (id)content;
- (double)borderWidth;
- (id)borderColor;
- (void)setContent:;
- (void).cxx_destruct;
- (id)bgColor;
- (void)setBgColor:;
- (id)tapAction;
- (void)setTapAction:;
@end
