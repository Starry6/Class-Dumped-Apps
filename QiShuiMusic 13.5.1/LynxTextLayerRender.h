@interface LynxTextLayerRender : NSObject
@property (nonatomic) LynxTextRenderer textRenderer;
@property (nonatomic) {UIEdgeInsets=dddd} border;
@property (nonatomic) {UIEdgeInsets=dddd} padding;
@property (nonatomic) {CGPoint=dd} overflowOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)overflowOffset;
- (void)setOverflowOffset:;
- (void)setTextRenderer:;
- (id)textRenderer;
- (void)drawLayer:inContext:;
- (id)border;
- (void)setPadding:;
- (void).cxx_destruct;
- (void)setBorder:;
- (id)padding;
@end
