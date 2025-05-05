@interface NRUnarchivedObjectVerifier : NSObject
+ (void)unarchivingVerifyObjectIsNotNil:name:owner:;
+ (void)unarchivingVerifyObjectClasses:name:classes:owner:;
@end
