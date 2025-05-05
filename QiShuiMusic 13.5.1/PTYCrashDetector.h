@interface PTYCrashDetector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addTag:forKey:;
+ (void)registerCrashCallBack;
+ (void)removeTagForKey:;
+ (id)currentPage;
+ (void)setup:;
@end
