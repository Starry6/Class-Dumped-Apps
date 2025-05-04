@interface AWELotusADViewShadowNode : LynxShadowNode
@property (nonatomic) {CGSize=dd} adSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAdSize:;
- (void)adoptNativeLayoutNode:;
- (id)measureNode:withWidth:widthMode:height:heightMode:;
- (id)adSize;
+ (void)lynxLazyLoad;
@end
