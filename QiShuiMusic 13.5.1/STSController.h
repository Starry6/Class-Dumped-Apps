@interface STSController : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSTSObject:error:;
- (BOOL)signalChangeWithError:;
- (BOOL)updateLabel:state:didChange:error:;
- (BOOL)updateGlobalState:didChange:error:;
- (void)cleanupLabel:;
- (void)cleanupAllLabels;
- (BOOL)updateGlobalState:labelStates:error:;
- (BOOL)updateGlobalState:labelStates:additionalLabelInfo:error:;
- (id)ensureResourcesAllocatedForLabel:error:;
- (BOOL)updateLabel:state:didChange:additionalInfo:error:;
- (BOOL)_updateGlobalState:didChange:error:;
+ (long long)maxNumberOfPerLabelStates;
+ (unsigned long long)maxLabelLength;
@end
