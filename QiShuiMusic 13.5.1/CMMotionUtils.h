@interface CMMotionUtils : NSObject
+ (long long)authorizationStatus;
+ (id)sendMessageSync:;
+ (void)sendMessage:withReplyClasses:callback:;
+ (void)tccServiceMotionAccessWithLabel:;
+ (long long)isAuthorizedForEntitlement:;
+ (id)logDirectory;
+ (unsigned long long)copyDataFrom:to:;
+ (BOOL)featureAvailability:;
+ (id)sendMessage:withReplyClassesSync:;
+ (id)fileHandleForWritingToURL:;
+ (void)tccServiceMotionAccessWithBlock:;
+ (BOOL)isMotionActivityEntitled;
+ (id)getExecutablePathFromPid:;
+ (BOOL)hasEntitlement:;
@end
