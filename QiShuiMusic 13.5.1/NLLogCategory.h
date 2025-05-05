@interface NLLogCategory : NSObject
@property (nonatomic) NSString loggingSubsystem;
@property (nonatomic) NSObject<OS_os_log> internal;
@property (nonatomic) NSString loggingCategory;
- (id)loggingCategory;
- (id)internal;
- (void).cxx_destruct;
- (id)loggingSubsystem;
- (id)initCategory:inSubsystem:;
+ (id)defaultCategory;
+ (id)categoryWithName:;
+ (id)categoryWithName:inSubsystem:;
+ (void)_addCategory:inSubsystem:;
+ (id)_getCategory:;
@end
