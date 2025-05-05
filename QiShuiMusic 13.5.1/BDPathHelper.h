@interface BDPathHelper : NSObject
+ (BOOL)createDirIfNotExistPath:;
+ (BOOL)deleteDirIfExistPath:;
+ (BOOL)exitDir:;
+ (BOOL)moveDirItems:toDirPath:error:;
+ (BOOL)moveFileItem:toDirPath:error:;
@end
