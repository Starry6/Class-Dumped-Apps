@interface ECSMTPAccount : ECAccount
- (long long)defaultPortNumber;
- (id)portNumberObject;
- (id)_hostnameFromParentAccount:;
- (id)usesSSLObject;
+ (id)standardPorts;
+ (id)standardSSLPorts;
@end
