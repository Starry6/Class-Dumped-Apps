@interface AWERLAnimationVirtualView : AWERLVirtualView
@property (nonatomic) Q transitionType;
@property (nonatomic) AWERLVirtualView virtualView;
- (void)debugBuildDescriptions:;
- (id)mountWithContext:;
- (void)debugBuildLayoutDescriptions:;
- (id)transitionString;
- (void)debugHierarchyVirtualViewDescriptions;
- (void)debugHierarchyLayoutDescription;
- (void)setVirtualView:;
- (void)setTransitionType:;
- (unsigned long long)transitionType;
- (id)init;
- (id)frame;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)virtualView;
@end
