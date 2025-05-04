@interface AWEECOMIMPaasModelService : NSObject
+ (id)classForProtocol:;
+ (long long)impType;
+ (void)registerClass:forProtocol:impType:;
+ (void)startRegisterClassTask;
+ (id)classMap;
@end
