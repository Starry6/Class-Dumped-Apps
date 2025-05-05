@interface JSVirtualMachine : NSObject
@property (nonatomic) ^{OpaqueJSContextGroup=} JSContextGroupRef;
- (id)init;
- (id)externalRememberedSet;
- (void)dealloc;
- (void)shrinkFootprintWhenIdle;
- (id)initWithContextGroupRef:;
- (BOOL)isWebThreadAware;
- (void)removeManagedReference:withOwner:;
- (id)externalObjectGraph;
- (void)addContext:forGlobalContextRef:;
- (BOOL)isOldExternalObject:;
- (id)JSContextGroupRef;
- (id)externalDataMutex;
- (void).cxx_destruct;
- (id)contextForGlobalContextRef:;
- (id).cxx_construct;
- (void)addManagedReference:withOwner:;
- (void)addExternalRememberedObject:;
+ (unsigned long long)setNumberOfDFGCompilerThreads:;
+ (void)setCrashOnVMCreation:;
+ (id)virtualMachineWithContextGroupRef:;
+ (unsigned long long)setNumberOfFTLCompilerThreads:;
@end
