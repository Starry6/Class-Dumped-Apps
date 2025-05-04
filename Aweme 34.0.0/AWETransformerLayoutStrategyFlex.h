@interface AWETransformerLayoutStrategyFlex : NSObject
@property (nonatomic) AWETransformerJustifyContentBaseLayout justifyContentLayout;
@property (nonatomic) AWETransformerAlignItemsBaseLayout alignItemsLayout;
@property (nonatomic) AWETransformerLayoutFlexAttributes flexAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)flexAttributes;
- (id)initWithContainerElement:;
- (void)setFlexAttributes:;
- (void)calculateLayoutWithContainerSize:completion:;
- (double)calculateAdaptiveContainerWidth;
- (double)calculateAdaptiveContainerHeight;
- (id)justifyContentLayoutWithMainAxisStrategy:element:;
- (id)alignItemsLayoutWithCrossAxisStrategy:element:;
- (id)justifyContentLayout;
- (id)alignItemsLayout;
- (void)setJustifyContentLayout:;
- (void)setAlignItemsLayout:;
- (void).cxx_destruct;
@end
