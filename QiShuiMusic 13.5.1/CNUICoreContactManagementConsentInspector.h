@interface CNUICoreContactManagementConsentInspector : NSObject
@property (nonatomic) STManagementState managementState;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)managementState;
- (unsigned long long)contactManagementConsentStateOfDelegateWithInfo:;
- (id)initWithManagementState:schedulerProvider:;
- (id)contactManagementConsentStateFutureForDSID:;
+ (unsigned long long)contactManagementConsentStateFromSTContactManagementState:;
@end
