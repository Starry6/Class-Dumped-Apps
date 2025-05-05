@interface NEPolicySession : NSObject
@property (nonatomic) q priority;
- (BOOL)registerServiceUUID:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void)setPriority:;
- (void)dealloc;
- (BOOL)removeAllPolicies;
- (unsigned long long)addDomainFilterWithData:;
- (id)initFromPrivilegedProcess;
- (BOOL)apply;
- (unsigned long long)addPolicy:;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)removeAllDomainFilters;
- (id)dumpKernelPolicies;
- (BOOL)unregisterServiceUUID:;
- (int)dupSocket;
- (void).cxx_destruct;
- (id)policyWithID:;
- (id)initWithSessionName:;
- (id)description;
- (BOOL)removeDomainFilterWithID:;
- (id)initWithSocket:;
- (BOOL)removePolicyWithID:;
- (unsigned long long)addPolicy:storeLocally:;
- (long long)priority;
@end
