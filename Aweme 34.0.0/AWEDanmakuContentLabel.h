@interface AWEDanmakuContentLabel : UILabel
@property (nonatomic) q type;
@property (nonatomic) NSString danmakuText;
@property (nonatomic) NSArray danmakuStyleList;
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) double strokeWidth;
- (id)colorFromHexString:baseColor:;
- (void)setTextColor:;
- (id)initWithFrame:textColor:type:;
- (id)danmakuText;
- (void)setDanmakuText:;
- (id)danmakuStyleList;
- (void)drawUnderLineWithStart:len:;
- (void)setDanmakuStyleList:;
- (id)accessibilityLabel;
- (void)setStrokeWidth:;
- (void)setStrokeColor:;
- (double)strokeWidth;
- (void)drawTextInRect:;
- (id)strokeColor;
- (id)initWithFrame:;
- (void)setAccessibilityLabel:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)boundingRectForCharacterRange:;
@end
