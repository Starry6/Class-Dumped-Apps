@interface PuzzleLatchDriverModel : NSObject
@property (nonatomic) PuzzleContext context;
@property (nonatomic) IESHYHybridContainerConfig configuration;
@property (nonatomic) NSObject<OS_dispatch_queue> safeQueue;
- (id)safeQueue;
- (void)setSafeQueue:;
- (id)context;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (void)setContext:;
@end
