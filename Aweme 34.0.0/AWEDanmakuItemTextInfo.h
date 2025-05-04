@interface AWEDanmakuItemTextInfo : NSObject
@property (nonatomic) NSAttributedString danmakuText;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} danmakuTextFrame;
@property (nonatomic) double strokeWidth;
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) UIFont danmakuFont;
@property (nonatomic) UIColor danmakuTextColor;
- (id)colorFromHexStringForTextInfo:;
- (void)setDanmakuTextColor:;
- (id)danmakuFont;
- (void)setDanmakuFont:;
- (id)danmakuText;
- (void)setDanmakuText:;
- (id)danmakuTextFrame;
- (void)setDanmakuTextFrame:;
- (id)danmakuTextColor;
- (void)setStrokeWidth:;
- (void)setStrokeColor:;
- (double)strokeWidth;
- (id)strokeColor;
- (void).cxx_destruct;
@end
