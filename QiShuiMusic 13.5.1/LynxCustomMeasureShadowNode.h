@interface LynxCustomMeasureShadowNode : LynxShadowNode
@property (nonatomic) BOOL hasCustomLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adoptNativeLayoutNode:;
- (void)alignNativeLayoutNode:alignContext:;
- (void)alignWithAlignParam:AlignContext:;
- (void)customAlignLayoutNode:alignContext:;
- (void)customLayout:requestReset:;
- (id)customMeasureLayoutNode:measureContext:;
- (id)measureNativeLayoutNode:measureContext:;
- (id)measureWithMeasureParam:MeasureContext:;
- (void)setHasCustomLayout:;
- (BOOL)supportInlineView;
- (double)toPtWithUnitValue:fontSize:;
- (BOOL)hasCustomLayout;
+ (id)__lynx_prop_config__240;
@end
