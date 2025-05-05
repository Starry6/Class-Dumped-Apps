@interface LynxComponentScopeRegistry : NSObject
@property (nonatomic) NSMutableDictionary uiClasses;
@property (nonatomic) NSMutableDictionary shadowNodeClasses;
@property (nonatomic) NSSet allRegisteredComponent;
- (id)allRegisteredComponent;
- (void)makeIntoGloabl;
- (void)registerShadowNode:withName:;
- (void)registerUI:withName:;
- (void)setShadowNodeClasses:;
- (void)setUiClasses:;
- (Class)shadowNodeClassWithName:accessible:;
- (id)shadowNodeClasses;
- (Class)uiClassWithName:accessible:;
- (id)uiClasses;
- (id)init;
- (void).cxx_destruct;
@end
