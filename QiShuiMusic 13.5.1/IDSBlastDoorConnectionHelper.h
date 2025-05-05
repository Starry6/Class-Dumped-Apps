@interface IDSBlastDoorConnectionHelper : NSObject
@property (nonatomic) @ idsBlastDoor;
- (id)init;
- (void)addAllowlistedKey:toValidatedPayload:fromOriginalPayload:;
- (BOOL)commandEnabledForBlastDoor:topic:;
- (void)setIdsBlastDoor:;
- (id)idsBlastDoor;
- (void)diffuseAPSUserPayload:topic:withCompletionBlock:;
- (void).cxx_destruct;
- (void)auditMissingHeaderKeys:target:;
- (BOOL)removeAllowlistedKey:fromPayload:;
+ (id)getBlastDoorSharedConnection;
@end
