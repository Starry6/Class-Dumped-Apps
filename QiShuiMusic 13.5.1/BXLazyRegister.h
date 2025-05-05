@interface BXLazyRegister : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> infoDispatchQueue;
- (void)evaluateLazyRegister;
- (id)infoDispatchQueue;
- (void)setInfoDispatchQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
