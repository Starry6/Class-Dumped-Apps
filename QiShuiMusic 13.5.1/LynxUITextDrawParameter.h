@interface LynxUITextDrawParameter : NSObject
@property (nonatomic) LynxTextRenderer renderer;
@property (nonatomic) {UIEdgeInsets=dddd} padding;
@property (nonatomic) {UIEdgeInsets=dddd} border;
@property (nonatomic) {CGPoint=dd} overflowLayerOffset;
- (id)overflowLayerOffset;
- (void)setOverflowLayerOffset:;
- (void)setRenderer:;
- (id)renderer;
- (id)border;
- (void)setPadding:;
- (void).cxx_destruct;
- (void)setBorder:;
- (id)padding;
@end
