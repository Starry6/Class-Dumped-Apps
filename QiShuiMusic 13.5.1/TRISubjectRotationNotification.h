@interface TRISubjectRotationNotification : NSObject
+ (void)deregisterUpdateWithToken:;
+ (id)registerSubjectRotationWithQueue:usingBlock:;
+ (BOOL)notifySubjectRotation;
@end
