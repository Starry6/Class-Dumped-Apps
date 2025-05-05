@interface VEAVCProfileSizeAdapter : NSObject
+ (id)adjustCFProfile:withTargetSize:;
+ (id)adjustProfile:withTargetSize:;
+ (BOOL)isLevel30SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel31SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel32SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel40SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel41SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel42SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel50SupportedWithMaxSize:minSize:;
+ (BOOL)isLevel51SupportedWithMaxSize:minSize:;
+ (id)transFromProfile:;
@end
