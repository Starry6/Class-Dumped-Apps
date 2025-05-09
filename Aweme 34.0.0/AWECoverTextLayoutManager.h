@interface AWECoverTextLayoutManager : NSLayoutManager
@property (nonatomic) @? beforeShowGlyhpBlock;
@property (nonatomic) @? afterShowGlyphBlock;
@property (nonatomic) BOOL placeHolder;
@property (nonatomic) AWECoverTextConfig textConfig;
@property (nonatomic) UITextView textView;
- (id)textConfig;
- (void)setTextConfig:;
- (id)beforeShowGlyhpBlock;
- (id)afterShowGlyphBlock;
- (id)p_drawText:range:point:;
- (void)p_drawImageWithContext:image:rect:;
- (id)p_drawCoverText:range:point:;
- (id)p_drawStrokeText:range:point:;
- (id)p_drawShadowWithRange:point:shadowColor:offset:radius:textColor:;
- (id)p_fillContextBlockWithColor:;
- (void)setBeforeShowGlyhpBlock:;
- (id)p_restoreContextBlock;
- (void)setAfterShowGlyphBlock:;
- (id)p_drawGradientColorWithRange:point:startColor:endColor:horizontal:;
- (id)p_strokeContextBlockWithWidth:color:join:;
- (id)p_shadowContextBlockWithShadowColor:offset:radius:textColor:;
- (id)textView;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:atPoint:;
- (void)showCGGlyphs:positions:count:font:matrix:attributes:inContext:;
- (void)setPlaceHolder:;
- (BOOL)placeHolder;
@end
