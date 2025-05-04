@interface AWEPOIParamsCommonVerifier : NSObject
+ (BOOL)isAppVersionMatchVersionRule:;
+ (id)verifyNameInParam:simpleItem:;
+ (BOOL)stringIsNumber:;
+ (BOOL)paramValue:inArray:;
+ (id)messageWithCode:;
+ (long long)verifyEventParam:simpleItem:;
+ (id)errorWithCode:message:;
@end
