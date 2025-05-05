@interface BNLaunchMainExecutable : NSObject
+ (id)VMFileName;
+ (id)VMFilePath;
+ (BOOL)isLaunchMatchPageIn;
+ (BOOL)isVMFileExist;
+ (unsigned long long)pageInStrategy;
+ (void)updateABSettings:pageInStrategy:;
@end
