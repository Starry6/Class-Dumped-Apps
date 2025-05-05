@interface OS_MobileGestalt : NSObject
@property (nonatomic) NSDictionary overrides;
@property (nonatomic) NSObject<OS_os_log> log;
- (id)init;
- (id)log;
- (void)setOverrides:;
- (id)overrides;
- (void)setLog:;
- (void).cxx_destruct;
@end
