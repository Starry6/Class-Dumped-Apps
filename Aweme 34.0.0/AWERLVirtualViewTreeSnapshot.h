@interface AWERLVirtualViewTreeSnapshot : NSObject
@property (nonatomic) AWERLVirtualViewTreeSnapshotNode root;
- (id)initWithRootVirtualView:;
- (id)root;
- (id)build:;
- (void).cxx_destruct;
- (void)setRoot:;
+ (id)buildAnimationTree:to:;
+ (id)animationVirtualViewTreeFrom:transitionType:;
+ (id)merge:to:;
@end
