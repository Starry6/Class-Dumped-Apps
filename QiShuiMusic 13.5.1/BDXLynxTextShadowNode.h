@interface BDXLynxTextShadowNode : BDXLynxVarietyTextShadowNode
@property (nonatomic) YYTextLayout layout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutDidUpdate;
- (void)adoptNativeLayoutNode:;
- (void)dispatchLayoutEventWithLayout:withTruncatedString:;
- (id)getExtraBundle;
- (void)layoutDidStart;
- (id)measureNode:withWidth:widthMode:height:heightMode:;
- (BOOL)needsEventSet;
- (void)richTextType:requestReset:;
- (void)textIndent:requestReset:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (BOOL)hasCustomLayout;
+ (id)__lynx_prop_config__892;
+ (id)__lynx_prop_config__963;
+ (void)lynxLazyLoad;
@end
