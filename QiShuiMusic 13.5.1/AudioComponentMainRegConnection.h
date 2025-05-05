@interface AudioComponentMainRegConnection : NSObject
- (id)initWithRegistrar:connection:;
- (void)getComponentList:linkedSDKRequiresEntitlement:includeExtensions:reply:;
- (void)canRegisterComponent:reply:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
