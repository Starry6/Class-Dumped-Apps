@interface GKNoiseModifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)inputModuleAtIndex:;
- (void)setInputModule:atIndex:;
- (id)initWithInputModuleCount:;
@end
