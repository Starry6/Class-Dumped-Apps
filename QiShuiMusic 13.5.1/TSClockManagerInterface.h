@interface TSClockManagerInterface : NSObject
@property (nonatomic) TSClockManager clockManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)clockManager;
- (void).cxx_destruct;
- (void)interruptedConnectionForClockManager:;
- (void)addToClockManager;
- (void)removeFromClockManager;
- (void)setInterruptionCallback:andRefcon:;
- (void)setClockManager:;
@end
