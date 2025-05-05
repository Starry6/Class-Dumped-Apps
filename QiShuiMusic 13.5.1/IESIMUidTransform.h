@interface IESIMUidTransform : NSObject
+ (void)recordSecUidWithUid:withSecUid:;
+ (id)getSecUidWithUid:;
+ (void)initShareLock;
@end
