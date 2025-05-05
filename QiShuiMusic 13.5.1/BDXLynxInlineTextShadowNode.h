@interface BDXLynxInlineTextShadowNode : BDXLynxAbstractTextShadowNode
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inlineAttributeString;
- (BOOL)needsEventSet;
- (BOOL)isVirtual;
+ (void)lynxLazyLoad;
@end
