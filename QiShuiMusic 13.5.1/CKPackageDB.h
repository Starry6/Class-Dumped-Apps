@interface CKPackageDB : NSObject
+ (BOOL)copySQLiteFileAtPath:toPath:timeout:error:;
+ (BOOL)moveSQLiteFileAtPath:toPath:timeout:error:;
@end
