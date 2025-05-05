@interface LynxRefreshViewShadowNode : LynxCustomMeasureShadowNode
@property (nonatomic) {CGSize=dd} headerSize;
@property (nonatomic) {CGSize=dd} footerSize;
@property (nonatomic) {CGSize=dd} listSize;
- (void)customAlignLayoutNode:alignContext:;
- (id)customMeasureLayoutNode:measureContext:;
- (id)listSize;
- (void)setListSize:;
- (id)headerSize;
- (void)setHeaderSize:;
- (id)footerSize;
- (void)setFooterSize:;
+ (void)lynxLazyLoad;
@end
