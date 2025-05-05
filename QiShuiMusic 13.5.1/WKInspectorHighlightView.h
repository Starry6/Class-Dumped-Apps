@interface WKInspectorHighlightView : UIView
- (void)drawRect:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_removeAllLayers;
- (void)_createLayers:;
- (void)_layoutForNodeHighlight:offset:;
- (void)_layoutForNodeListHighlight:;
- (void)_layoutForRectsHighlight:;
- (void)update:scale:frame:;
@end
