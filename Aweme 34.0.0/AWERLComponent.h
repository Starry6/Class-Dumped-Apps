@interface AWERLComponent : NSObject
@property (nonatomic) @ data;
@property (nonatomic) @ context;
@property (nonatomic) NSString tagString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (void)setTagString:;
- (id)tagString;
- (void)updateComponentData:;
- (id)rootComponent;
- (id)componentsWithTag:rootComponent:;
- (void)setNeedsUpdateAnimatedWithAnimator:fromNode:toNode:start:completion:;
- (void)setNeedsUpdate;
- (void)setData:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:context:;
- (id)context;
@end
