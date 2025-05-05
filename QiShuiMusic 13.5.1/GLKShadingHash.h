@interface GLKShadingHash : NSObject
- (id)init;
- (void)dealloc;
- (void)purgeAllShaders;
- (void)setCompiledVsh:forKey:;
- (id)compiledVshForKey:;
- (void)setCompiledFsh:forKey:;
- (id)compiledFshForKey:;
@end
