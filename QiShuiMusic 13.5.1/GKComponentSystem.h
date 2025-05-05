@interface GKComponentSystem : NSObject
@property (nonatomic) # componentClass;
@property (nonatomic) NSArray components;
- (BOOL)respondsToSelector:;
- (id)components;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)methodSignatureForSelector:;
- (id)objectAtIndexedSubscript:;
- (void)addComponent:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)performSelector:withObject:;
- (void)updateWithDeltaTime:;
- (void)removeComponent:;
- (Class)classForGenericArgumentAtIndex:;
- (id)initWithComponentClass:;
- (void)addComponentWithEntity:;
- (void)removeComponentWithEntity:;
- (Class)componentClass;
@end
