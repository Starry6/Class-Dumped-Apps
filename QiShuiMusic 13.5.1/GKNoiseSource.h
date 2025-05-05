@interface GKNoiseSource : NSObject
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)inputModuleAtIndex:;
- (void)setInputModule:atIndex:;
@end
