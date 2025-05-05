@interface FigCaptureMemoryReporter : NSObject
@property (nonatomic) Q currentFootprint;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentFootprint;
- (void)incrementActiveClientCount:clientIsCameraMessagesApp:withMemoryPool:;
- (void)decrementActiveClientCount:clientIsCameraMessagesApp:;
+ (id)sharedInstance;
@end
