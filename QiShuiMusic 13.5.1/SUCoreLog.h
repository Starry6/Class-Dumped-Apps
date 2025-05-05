@interface SUCoreLog : NSObject
@property (nonatomic) NSObject<OS_os_log> oslog;
@property (nonatomic) NSString category;
- (id)oslog;
- (id)initWithCategory:;
- (void).cxx_destruct;
- (id)category;
+ (id)sharedLogger;
@end
