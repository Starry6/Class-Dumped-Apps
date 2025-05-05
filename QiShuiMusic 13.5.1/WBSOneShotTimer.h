@interface WBSOneShotTimer : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSDate fireDate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)fireDate;
- (id)queue;
- (void)invalidate;
- (id)initWithFireDate:queue:block:;
- (id)initWithFireDate:queue:target:selector:;
@end
