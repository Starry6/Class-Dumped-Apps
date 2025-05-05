@interface BWStillImageTimeMachine : NSObject
@property (nonatomic) NSInteger capacity;
- (int)capacity;
- (void)dealloc;
- (void)drain;
- (void)resume;
- (id)initWithCapacity:;
- (void)suspendAndDrain;
- (int)insertFrame:;
- (id)copyBestFrame;
+ (BOOL)afComplete:;
@end
