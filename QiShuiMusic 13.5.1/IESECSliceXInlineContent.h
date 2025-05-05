@interface IESECSliceXInlineContent : NSObject
@property (nonatomic) Q type;
@property (nonatomic) {IESECSliceXInlineOffset=dd} inlineOffset;
@property (nonatomic) IESECSliceXAction clickAction;
@property (nonatomic) IESECSliceXAction longClickAction;
@property (nonatomic) {_NSRange=QQ} range;
- (id)longClickAction;
- (void)setClickAction:;
- (id)clickAction;
- (id)inlineOffset;
- (void)setInlineOffset:;
- (void)setLongClickAction:;
- (void)setRange:;
- (id)range;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithElement:;
@end
