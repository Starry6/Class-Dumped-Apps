@interface BSPortDeathSentinel : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSendRight:;
- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)activateWithHandler:;
- (id)queue;
- (void)invalidate;
+ (void)monitorSendRight:withHandler:;
@end
