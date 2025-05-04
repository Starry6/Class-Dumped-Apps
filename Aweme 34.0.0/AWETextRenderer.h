@interface AWETextRenderer : NSObject
@property (nonatomic) AWETextRendererContext context;
@property (nonatomic) NSTextStorage textStorage;
@property (nonatomic) NSLayoutManager layoutManager;
@property (nonatomic) NSTextContainer textContainer;
- (id)initWithRendererContext:;
- (id)lineFragmentRects;
- (id)textStorage;
- (id)layoutManager;
- (BOOL)isTruncated;
- (void)layout;
- (void)setTextContainer:;
- (void)setContext:;
- (id)size;
- (void).cxx_destruct;
- (void)drawInContext:;
- (void)setTextStorage:;
- (id)context;
- (id)textContainer;
- (void)setLayoutManager:;
- (void)layoutWithContext:;
@end
