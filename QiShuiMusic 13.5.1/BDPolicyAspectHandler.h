@interface BDPolicyAspectHandler : NSObject
+ (id)didEndInvokeAPI:context:;
+ (void)entryEnd:context:;
+ (void)entryStart:context:;
+ (id)willInvokeAPI:context:;
@end
