@interface BDXLynxInputShadowNode : LynxCustomMeasureShadowNode
@property (nonatomic) BOOL needRelayout;
@property (nonatomic) double mHeightAtMost;
@property (nonatomic) double mWidthAtMost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adoptNativeLayoutNode:;
- (void)alignWithAlignParam:AlignContext:;
- (void)customAlignLayoutNode:alignContext:;
- (id)customMeasureLayoutNode:measureContext:;
- (id)initWithSign:tagName:;
- (double)mHeightAtMost;
- (double)mWidthAtMost;
- (id)measureWithMeasureParam:MeasureContext:;
- (BOOL)needRelayout;
- (void)setMHeightAtMost:;
- (void)setMWidthAtMost:;
- (void)setNeedRelayout:;
+ (void)lynxLazyLoad;
@end
