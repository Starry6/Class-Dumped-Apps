@interface IDSPayloadInspector : NSObject
+ (void)inspectPayload:messageGuid:;
+ (void)enforceSecurityError:messageGuid:;
+ (long long)validateData:messageGuid:;
+ (long long)validateString:messageGuid:;
@end
