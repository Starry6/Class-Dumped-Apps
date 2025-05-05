@interface MLSaver : NSObject
+ (BOOL)saveModelToAssetAtURL:model:error:;
+ (BOOL)saveModelToArchive:model:error:;
+ (BOOL)saveModelToArchive:model:compilerOptions:error:;
+ (BOOL)copyModelAtURL:toURL:error:;
@end
